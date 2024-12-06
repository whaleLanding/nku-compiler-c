%option noyywrap
%option nounput
%option noinput
%top{
    #include <stdarg.h>
    #include "common.h"
    #include "parser.h"
    #include <string>
    #include <vector>
    #include <ostream>
    #include <fstream>
    #include <iostream>
    #include <math.h>
    using namespace std;
}
%{
    extern FILE *yyin; 
    extern FILE *yyout;
    extern dump_type_t dump_type;

    inline void dump_tokens(const char* format, ...){
        va_list args;
        va_start(args, format);
        if (dump_type == TOKENS)
            vfprintf(yyout, format, args);
        va_end(args);
    }
%}

DECIMIAL ([1-9][0-9]*|0) 
ID [[:alpha:]_][[:alpha:][:digit:]_]*
char ('.')
SPACE " "
linecomment (\/\/.*|\/\/.*)
commentbegin "/*"
commentelement .|\n
commentend "*/"
EOL (\r\n|\n|\r)
WHITE [\t ]

/*一行注释*/
EXEGESIS ("//".*{EOL})
/*多行注释*/
EXEGESIS2 ("/*"(.|\n)*?"*/")

%%
"int" {
    dump_tokens("INT\t", yytext);
    return INT;
}

"main" {
    dump_tokens("MAIN\t", yytext);
    return MAIN;
}
"if" {
    dump_tokens("IF\t", yytext);
    return IF;
}

"else" {
    dump_tokens("ELSE\t", yytext);
    return ELSE;
}
"while" {
    dump_tokens("WHILE\t", yytext);
    return WHILE;
}

"for" {
    dump_tokens("FOR\t", yytext);
    return FOR; 
}

"break" {
    dump_tokens("BREAK\t", yytext);
    return BREAK;
}

"continue" {
    dump_tokens("CONTINUE\t", yytext);
    return CONTINUE;
}

"return" {
    dump_tokens("RETURN\t", yytext);
    return RETURN;
}

"&&" {
    dump_tokens("AND\t", yytext);
    return AND;
}

"||" {
    dump_tokens("OR\t", yytext);
    return OR;
}

"!" {
    dump_tokens("NOT\t", yytext);
    return NOT;
}

"=" {
    dump_tokens("ASSIGN\t", yytext);
    return ASSIGN;
}

"==" {
    dump_tokens("EQUAL\t", yytext);
    return EQ;
}

"!=" {
    dump_tokens("UNEQUAL\t", yytext);
    return NEQ;
}

"<" {
    dump_tokens("LESS\t", yytext);
    return LESS;
}

"<=" {
    dump_tokens("LESSEQUAL\t", yytext);
    return LEQ;
}

">" {
    dump_tokens("MORE\t", yytext);
    return GREATER;
}

">=" {
    dump_tokens("MOREEQUAL\t", yytext);
    return GEQ;
}

"++" {
    dump_tokens("SELFADD\t", yytext);
    return SELFADD;
}

"--" {
    dump_tokens("SELFDEC\t", yytext);
    return SELFDEC;
}

"+" {
    dump_tokens("ADD\t", yytext);
    return ADD;
}

"-" {
    dump_tokens("SUB\t", yytext);
    return SUB;
}

"*" {
    dump_tokens("MUL\t", yytext);
    return MUL;
}

"/" {
    dump_tokens("DIV\t", yytext);
    return DIV;
}

"%" {
    dump_tokens("MOD\t", yytext);
    return MOD;
}

"," {
    dump_tokens("COMMA\t", yytext);
    return COMMA;
}

":" {
    dump_tokens("COLON\t", yytext);
    return COLON;
}

";" {
    dump_tokens("SEMICOLON\t", yytext);
    return SEMICOLON;
}

"(" {
    dump_tokens("LP\t", yytext);
    return LP;
}

")" {
    dump_tokens("RP\t", yytext);
    return RP;
}

"{" {
    dump_tokens("LB\t", yytext);
    return LB;
}

"}" {
    dump_tokens("RB\t", yytext);
    return RB;
}

"scanf" {
    dump_tokens("SCAN\t", yytext);
    return SCAN;
}

"printf" {
    dump_tokens("PRINT\t", yytext);
    return PRINT;
}

{DECIMIAL} {
    dump_tokens("DECIMIAL\t", yytext);
    yylval.itype = atoi(yytext);
    return INTEGER;
}

{EXEGESIS2} {
    // 识别注释
    // printf("多行注释\t", yytext);
}

{EXEGESIS} {
    // 识别注释
    // dump_tokens("注释\t", yytext);
    // printf("注释\t", yytext);
}

{ID} {
    dump_tokens("ID\t", yytext);
    char *lexeme;
    lexeme = new char[strlen(yytext) + 1];
    strcpy(lexeme, yytext);
    yylval.strtype = lexeme;
    return ID;
}

{EOL} yylineno++;

{WHITE}

%%