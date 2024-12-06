/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 1 "src/parser.y"

    #include <iostream>
    #include <assert.h>
    #include "parser.h"
    extern Ast ast;
    int yylex();
    int yyerror( char const * );

#line 77 "src/parser.cpp"




# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_LP = 9,                         /* LP  */
  YYSYMBOL_RP = 10,                        /* RP  */
  YYSYMBOL_LB = 11,                        /* LB  */
  YYSYMBOL_RB = 12,                        /* RB  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 14,                     /* COLON  */
  YYSYMBOL_ADD = 15,                       /* ADD  */
  YYSYMBOL_SUB = 16,                       /* SUB  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_LESS = 19,                      /* LESS  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_GREATER = 21,                   /* GREATER  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_GEQ = 24,                       /* GEQ  */
  YYSYMBOL_LEQ = 25,                       /* LEQ  */
  YYSYMBOL_MUL = 26,                       /* MUL  */
  YYSYMBOL_DIV = 27,                       /* DIV  */
  YYSYMBOL_MOD = 28,                       /* MOD  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 31,                  /* CONTINUE  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_SELFADD = 33,                   /* SELFADD  */
  YYSYMBOL_SELFDEC = 34,                   /* SELFDEC  */
  YYSYMBOL_SCAN = 35,                      /* SCAN  */
  YYSYMBOL_PRINT = 36,                     /* PRINT  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_WHILE = 38,                     /* WHILE  */
  YYSYMBOL_MAIN = 39,                      /* MAIN  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_THEN = 41,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_Program = 43,                   /* Program  */
  YYSYMBOL_Stmts = 44,                     /* Stmts  */
  YYSYMBOL_Stmt = 45,                      /* Stmt  */
  YYSYMBOL_AssignStmt = 46,                /* AssignStmt  */
  YYSYMBOL_AssignS = 47,                   /* AssignS  */
  YYSYMBOL_BlockStmt = 48,                 /* BlockStmt  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_FuncDef = 50,                   /* FuncDef  */
  YYSYMBOL_IfStmt = 51,                    /* IfStmt  */
  YYSYMBOL_BreakStmt = 52,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 53,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 54,                /* ReturnStmt  */
  YYSYMBOL_Exp = 55,                       /* Exp  */
  YYSYMBOL_Cond = 56,                      /* Cond  */
  YYSYMBOL_PrimaryExp = 57,                /* PrimaryExp  */
  YYSYMBOL_AddExp = 58,                    /* AddExp  */
  YYSYMBOL_MulExp = 59,                    /* MulExp  */
  YYSYMBOL_UnaryExp = 60,                  /* UnaryExp  */
  YYSYMBOL_RelExp = 61,                    /* RelExp  */
  YYSYMBOL_LAndExp = 62,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 63,                    /* LOrExp  */
  YYSYMBOL_Type = 64,                      /* Type  */
  YYSYMBOL_DeclStmt = 65,                  /* DeclStmt  */
  YYSYMBOL_VarDefList = 66,                /* VarDefList  */
  YYSYMBOL_VarDef = 67,                    /* VarDef  */
  YYSYMBOL_LVal = 68,                      /* LVal  */
  YYSYMBOL_WhileStmt = 69,                 /* WhileStmt  */
  YYSYMBOL_ForStmt = 70,                   /* ForStmt  */
  YYSYMBOL_IOStmt = 71                     /* IOStmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    57,    62,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    86,    91,    97,   103,
     109,   121,   126,   132,   138,   144,   150,   166,   165,   175,
     184,   200,   203,   210,   217,   226,   229,   236,   242,   248,
     252,   256,   264,   267,   272,   281,   283,   289,   295,   304,
     307,   313,   318,   330,   333,   339,   345,   351,   357,   363,
     372,   374,   384,   386,   397,   400,   408,   414,   419,   428,
     442,   462,   482,   490,   500,   513
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTEGER", "IF",
  "ELSE", "INT", "VOID", "LP", "RP", "LB", "RB", "SEMICOLON", "COLON",
  "ADD", "SUB", "OR", "AND", "LESS", "ASSIGN", "GREATER", "EQ", "NEQ",
  "GEQ", "LEQ", "MUL", "DIV", "MOD", "NOT", "BREAK", "CONTINUE", "FOR",
  "SELFADD", "SELFDEC", "SCAN", "PRINT", "COMMA", "WHILE", "MAIN",
  "RETURN", "THEN", "$accept", "Program", "Stmts", "Stmt", "AssignStmt",
  "AssignS", "BlockStmt", "$@1", "FuncDef", "IfStmt", "BreakStmt",
  "ContinueStmt", "ReturnStmt", "Exp", "Cond", "PrimaryExp", "AddExp",
  "MulExp", "UnaryExp", "RelExp", "LAndExp", "LOrExp", "Type", "DeclStmt",
  "VarDefList", "VarDef", "LVal", "WhileStmt", "ForStmt", "IOStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      90,   -67,    20,   -67,   -67,    14,    31,    51,    28,    63,
      63,    62,    68,    69,   135,    79,    90,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     1,   -67,   -12,   -67,   -67,
     -67,   102,   -67,    90,   -67,   -67,    17,    67,    78,    89,
     102,   102,   -67,   102,   -67,   102,   102,   102,    91,   -67,
      -4,    48,   -67,   -67,   -67,   -67,    82,    73,    -6,   -67,
     102,    94,    95,    93,    -4,    24,    92,    96,    27,    63,
      63,    99,   111,     8,   -67,   -67,   106,   109,   119,   123,
     -67,   -67,   -67,   -67,   102,   102,   102,   102,   102,   102,
     124,   -67,   132,   127,   -67,   -67,    90,   102,   102,   102,
     102,   102,   102,   102,   102,   -67,   -67,   -67,   102,   116,
     102,   -67,   -67,   128,   133,    90,   -67,    48,    48,   -67,
     -67,   -67,   -67,   126,   -67,   -67,   139,    -4,    -4,    -4,
      -4,    -4,    -4,    24,    92,   136,   102,   -67,   -67,   -67,
     -67,   -67,    90,    17,   -67,   -67,   142,    90,   -67
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    71,     0,    64,    65,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     4,     5,    10,
      11,     6,    12,    13,     7,     0,     8,     0,     9,    15,
      14,     0,    29,     0,    33,    34,     0,     0,     0,     0,
       0,     0,    41,     0,    36,     0,     0,     0,     0,    51,
      37,    42,    45,    39,     1,     3,    69,     0,     0,    68,
       0,     0,     0,     0,    53,    60,    62,    38,     0,     0,
       0,     0,     0,     0,    20,    19,     0,     0,     0,     0,
      49,    50,    52,    35,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    25,    24,     0,     0,
       0,    22,    23,     0,     0,     0,    40,    43,    44,    46,
      47,    48,    70,     0,    67,    16,    31,    54,    55,    56,
      57,    58,    59,    61,    63,     0,     0,    21,    74,    75,
      72,    30,     0,     0,    26,    32,     0,     0,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   120,   -15,   -67,    11,    32,   -67,   -67,   -67,
     -67,   -67,   -67,   -37,   -36,   -67,   -14,   -66,   -32,    53,
      54,   -67,   -34,   -67,   -67,    65,     0,   -67,   -67,   -67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    15,    16,    17,    18,    71,    19,    33,    20,    21,
      22,    23,    24,    48,    63,    49,    50,    51,    52,    65,
      66,    67,    25,    26,    58,    59,    53,    28,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    55,    72,    77,    56,    78,    79,    91,    60,    37,
      38,    84,    85,    80,    81,    82,    27,    64,   117,   118,
       1,    61,    62,    93,     3,     4,    32,    64,   110,    31,
       1,    92,     2,    27,     3,     4,    73,    36,     5,   105,
      57,   111,   112,    97,    34,    98,    99,   100,   101,   102,
      69,    70,   122,    55,   119,   120,   121,     6,     7,     8,
       9,    10,    11,    12,    35,    13,     1,    14,    27,   106,
     107,    39,   135,   137,    86,    87,    88,    40,    41,    54,
      74,   126,    90,   127,   128,   129,   130,   131,   132,    64,
      64,    75,    76,     1,    64,     2,    27,     3,     4,   144,
     140,     5,    89,    96,    83,     1,    42,    94,    95,    72,
     103,    43,   108,   104,   109,    27,   113,    45,    46,   114,
       6,     7,     8,     9,    10,    11,    12,   145,    13,   115,
      14,    47,   148,   116,   123,    56,   136,     5,     1,    42,
     125,   138,    27,    73,    43,   142,   139,    27,    44,   143,
      45,    46,   147,    68,   146,   141,   133,   124,   134,     0,
       0,     0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
       0,    16,    36,    40,     3,    41,    43,    13,    20,     9,
      10,    15,    16,    45,    46,    47,    16,    31,    84,    85,
       3,    33,    34,    60,     7,     8,    12,    41,    20,     9,
       3,    37,     5,    33,     7,     8,    36,     9,    11,    12,
      39,    33,    34,    19,    13,    21,    22,    23,    24,    25,
      33,    34,    89,    68,    86,    87,    88,    30,    31,    32,
      33,    34,    35,    36,    13,    38,     3,    40,    68,    69,
      70,     9,   108,   110,    26,    27,    28,     9,     9,     0,
      13,    96,     9,    97,    98,    99,   100,   101,   102,   103,
     104,    13,     3,     3,   108,     5,    96,     7,     8,   136,
     115,    11,    20,    10,    13,     3,     4,    13,    13,   143,
      18,     9,    13,    17,     3,   115,    10,    15,    16,    10,
      30,    31,    32,    33,    34,    35,    36,   142,    38,    10,
      40,    29,   147,    10,    10,     3,    20,    11,     3,     4,
      13,    13,   142,   143,     9,     6,    13,   147,    13,    13,
      15,    16,    10,    33,   143,   123,   103,    92,   104,    -1,
      -1,    -1,    -1,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     8,    11,    30,    31,    32,    33,
      34,    35,    36,    38,    40,    43,    44,    45,    46,    48,
      50,    51,    52,    53,    54,    64,    65,    68,    69,    70,
      71,     9,    12,    49,    13,    13,     9,    68,    68,     9,
       9,     9,     4,     9,    13,    15,    16,    29,    55,    57,
      58,    59,    60,    68,     0,    45,     3,    39,    66,    67,
      20,    33,    34,    56,    58,    61,    62,    63,    44,    33,
      34,    47,    64,    68,    13,    13,     3,    55,    56,    55,
      60,    60,    60,    13,    15,    16,    26,    27,    28,    20,
       9,    13,    37,    55,    13,    13,    10,    19,    21,    22,
      23,    24,    25,    18,    17,    12,    68,    68,    13,     3,
      20,    33,    34,    10,    10,    10,    10,    59,    59,    60,
      60,    60,    55,    10,    67,    13,    45,    58,    58,    58,
      58,    58,    58,    61,    62,    56,    20,    55,    13,    13,
      45,    48,     6,    13,    55,    45,    47,    10,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    46,
      46,    47,    47,    47,    47,    47,    47,    49,    48,    48,
      50,    51,    51,    52,    53,    54,    54,    55,    56,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    66,    66,    67,
      67,    68,    69,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     4,     0,     4,     2,
       5,     5,     7,     2,     2,     3,     2,     1,     1,     1,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     2,
       2,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     3,     3,     1,     1,
       3,     1,     5,     9,     5,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: Stmts  */
#line 50 "src/parser.y"
          {
        ast.setRoot((yyvsp[0].stmttype));//设置分析树的root
    }
#line 1237 "src/parser.cpp"
    break;

  case 3: /* Stmts: Stmts Stmt  */
#line 57 "src/parser.y"
              {
            SeqNode* node = dynamic_cast<SeqNode*>((yyvsp[-1].stmttype));
            node->addNext(dynamic_cast<StmtNode*>((yyvsp[0].stmttype)));
            (yyval.stmttype) = dynamic_cast<StmtNode*>(node);
        }
#line 1247 "src/parser.cpp"
    break;

  case 4: /* Stmts: Stmt  */
#line 62 "src/parser.y"
            {
            SeqNode* node = new SeqNode();
            node->addNext(dynamic_cast<StmtNode*>((yyvsp[0].stmttype)));
            (yyval.stmttype) = dynamic_cast<StmtNode*>(node);
        }
#line 1257 "src/parser.cpp"
    break;

  case 5: /* Stmt: AssignStmt  */
#line 70 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1263 "src/parser.cpp"
    break;

  case 6: /* Stmt: IfStmt  */
#line 71 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1269 "src/parser.cpp"
    break;

  case 7: /* Stmt: ReturnStmt  */
#line 72 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1275 "src/parser.cpp"
    break;

  case 8: /* Stmt: DeclStmt  */
#line 73 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1281 "src/parser.cpp"
    break;

  case 9: /* Stmt: WhileStmt  */
#line 74 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1287 "src/parser.cpp"
    break;

  case 10: /* Stmt: BlockStmt  */
#line 75 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1293 "src/parser.cpp"
    break;

  case 11: /* Stmt: FuncDef  */
#line 76 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1299 "src/parser.cpp"
    break;

  case 12: /* Stmt: BreakStmt  */
#line 77 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1305 "src/parser.cpp"
    break;

  case 13: /* Stmt: ContinueStmt  */
#line 78 "src/parser.y"
                   {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1311 "src/parser.cpp"
    break;

  case 14: /* Stmt: IOStmt  */
#line 79 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1317 "src/parser.cpp"
    break;

  case 15: /* Stmt: ForStmt  */
#line 80 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1323 "src/parser.cpp"
    break;

  case 16: /* AssignStmt: LVal ASSIGN Exp SEMICOLON  */
#line 86 "src/parser.y"
                              {
        // std::cout<<"ASSIGN"<<std::endl;
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1332 "src/parser.cpp"
    break;

  case 17: /* AssignStmt: LVal SELFADD SEMICOLON  */
#line 91 "src/parser.y"
                           {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-2].exprtype), new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1342 "src/parser.cpp"
    break;

  case 18: /* AssignStmt: LVal SELFDEC SEMICOLON  */
#line 97 "src/parser.y"
                           {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-2].exprtype), new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1352 "src/parser.cpp"
    break;

  case 19: /* AssignStmt: SELFDEC LVal SEMICOLON  */
#line 103 "src/parser.y"
                           {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-1].exprtype), new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-1].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1362 "src/parser.cpp"
    break;

  case 20: /* AssignStmt: SELFADD LVal SEMICOLON  */
#line 109 "src/parser.y"
                           {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-1].exprtype), new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-1].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1372 "src/parser.cpp"
    break;

  case 21: /* AssignS: LVal ASSIGN Exp  */
#line 121 "src/parser.y"
                    {
        // std::cout<<"ASSIGN"<<std::endl;
        (yyval.stmttype) = new AssignStmt((yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1381 "src/parser.cpp"
    break;

  case 22: /* AssignS: LVal SELFADD  */
#line 126 "src/parser.y"
                 {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-1].exprtype), new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-1].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1391 "src/parser.cpp"
    break;

  case 23: /* AssignS: LVal SELFDEC  */
#line 132 "src/parser.y"
                 {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[-1].exprtype), new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-1].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1401 "src/parser.cpp"
    break;

  case 24: /* AssignS: SELFDEC LVal  */
#line 138 "src/parser.y"
                 {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[0].exprtype), new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[0].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1411 "src/parser.cpp"
    break;

  case 25: /* AssignS: SELFADD LVal  */
#line 144 "src/parser.y"
                 {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());

        (yyval.stmttype) = new AssignStmt((yyvsp[0].exprtype), new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[0].exprtype), new Constant(new ConstantSymbolEntry(TypeSystem::intType, 1))));
    }
#line 1421 "src/parser.cpp"
    break;

  case 26: /* AssignS: Type ID ASSIGN Exp  */
#line 150 "src/parser.y"
                      {
        identifiers = new SymbolTable(identifiers);
        // 首先将ID插入符号表中
        Type* type;
        type = TypeSystem::intType;
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(type, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.stmttype) = new DefNode(new Id(se), dynamic_cast<Node*>((yyvsp[0].exprtype)));
    }
#line 1436 "src/parser.cpp"
    break;

  case 27: /* $@1: %empty  */
#line 166 "src/parser.y"
    {identifiers = new SymbolTable(identifiers);}
#line 1442 "src/parser.cpp"
    break;

  case 28: /* BlockStmt: LB $@1 Stmts RB  */
#line 168 "src/parser.y"
    {
        (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
    }
#line 1453 "src/parser.cpp"
    break;

  case 29: /* BlockStmt: LB RB  */
#line 177 "src/parser.y"
    {
        (yyval.stmttype) = new CompoundStmt(nullptr);
    }
#line 1461 "src/parser.cpp"
    break;

  case 30: /* FuncDef: Type MAIN LP RP BlockStmt  */
#line 185 "src/parser.y"
    {
        Type *funcType;
        funcType = new FunctionType((yyvsp[-4].type),{});
        // 创建 main 函数的符号表条目，返回类型为 int
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, "main", identifiers->getLevel());
        identifiers->install("main", se); // 将 main 函数的符号表条目安装到符号表中
        identifiers = new SymbolTable(identifiers); // 创建 main 函数的符号表
        (yyval.stmttype) = new FunctionDef(se, (yyvsp[0].stmttype));
  
    }
#line 1476 "src/parser.cpp"
    break;

  case 31: /* IfStmt: IF LP Cond RP Stmt  */
#line 200 "src/parser.y"
                                  {//%prec 关键字，将终结符then 的优先级赋给产生式。
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1484 "src/parser.cpp"
    break;

  case 32: /* IfStmt: IF LP Cond RP Stmt ELSE Stmt  */
#line 203 "src/parser.y"
                                   {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1492 "src/parser.cpp"
    break;

  case 33: /* BreakStmt: BREAK SEMICOLON  */
#line 210 "src/parser.y"
                        {
            (yyval.stmttype) = new BreakStmt();
        }
#line 1500 "src/parser.cpp"
    break;

  case 34: /* ContinueStmt: CONTINUE SEMICOLON  */
#line 217 "src/parser.y"
                          {
            (yyval.stmttype) = new ContinueStmt();
        }
#line 1508 "src/parser.cpp"
    break;

  case 35: /* ReturnStmt: RETURN Exp SEMICOLON  */
#line 226 "src/parser.y"
                         {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1516 "src/parser.cpp"
    break;

  case 36: /* ReturnStmt: RETURN SEMICOLON  */
#line 229 "src/parser.y"
                       {
        (yyval.stmttype) = new ReturnStmt();
    }
#line 1524 "src/parser.cpp"
    break;

  case 37: /* Exp: AddExp  */
#line 236 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1530 "src/parser.cpp"
    break;

  case 38: /* Cond: LOrExp  */
#line 242 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1536 "src/parser.cpp"
    break;

  case 39: /* PrimaryExp: LVal  */
#line 248 "src/parser.y"
         {//左值
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1544 "src/parser.cpp"
    break;

  case 40: /* PrimaryExp: LP Exp RP  */
#line 252 "src/parser.y"
               {
        (yyval.exprtype) = (yyvsp[-1].exprtype);
    }
#line 1552 "src/parser.cpp"
    break;

  case 41: /* PrimaryExp: INTEGER  */
#line 256 "src/parser.y"
            {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1561 "src/parser.cpp"
    break;

  case 42: /* AddExp: MulExp  */
#line 264 "src/parser.y"
           {
            (yyval.exprtype) = (yyvsp[0].exprtype);
        }
#line 1569 "src/parser.cpp"
    break;

  case 43: /* AddExp: AddExp ADD MulExp  */
#line 267 "src/parser.y"
                          {
            SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
            
            (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
        }
#line 1579 "src/parser.cpp"
    break;

  case 44: /* AddExp: AddExp SUB MulExp  */
#line 272 "src/parser.y"
                          {
            SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
            (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
        }
#line 1588 "src/parser.cpp"
    break;

  case 45: /* MulExp: UnaryExp  */
#line 281 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1594 "src/parser.cpp"
    break;

  case 46: /* MulExp: MulExp MUL UnaryExp  */
#line 284 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1603 "src/parser.cpp"
    break;

  case 47: /* MulExp: MulExp DIV UnaryExp  */
#line 290 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1612 "src/parser.cpp"
    break;

  case 48: /* MulExp: MulExp MOD UnaryExp  */
#line 296 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1621 "src/parser.cpp"
    break;

  case 49: /* UnaryExp: ADD UnaryExp  */
#line 305 "src/parser.y"
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1627 "src/parser.cpp"
    break;

  case 50: /* UnaryExp: SUB UnaryExp  */
#line 308 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[0].exprtype));
    }
#line 1636 "src/parser.cpp"
    break;

  case 51: /* UnaryExp: PrimaryExp  */
#line 314 "src/parser.y"
    {
        (yyval.exprtype) =(yyvsp[0].exprtype);
    }
#line 1644 "src/parser.cpp"
    break;

  case 52: /* UnaryExp: NOT UnaryExp  */
#line 318 "src/parser.y"
                 {
            SymbolEntry *tmp = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
            (yyval.exprtype) = new BinaryExpr(tmp, BinaryExpr::NOT, (yyvsp[0].exprtype));
        }
#line 1653 "src/parser.cpp"
    break;

  case 53: /* RelExp: AddExp  */
#line 330 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1659 "src/parser.cpp"
    break;

  case 54: /* RelExp: RelExp LESS AddExp  */
#line 334 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1668 "src/parser.cpp"
    break;

  case 55: /* RelExp: RelExp GREATER AddExp  */
#line 340 "src/parser.y"
    {
		SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
		(yyval.exprtype) = new BinaryExpr(se, BinaryExpr::GREATER, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
	}
#line 1677 "src/parser.cpp"
    break;

  case 56: /* RelExp: RelExp EQ AddExp  */
#line 346 "src/parser.y"
        {
		SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
		(yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
	}
#line 1686 "src/parser.cpp"
    break;

  case 57: /* RelExp: RelExp NEQ AddExp  */
#line 352 "src/parser.y"
        {
		SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
		(yyval.exprtype) = new BinaryExpr(se, BinaryExpr::NEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
	}
#line 1695 "src/parser.cpp"
    break;

  case 58: /* RelExp: RelExp GEQ AddExp  */
#line 358 "src/parser.y"
        {
		SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
		(yyval.exprtype) = new BinaryExpr(se, BinaryExpr::GEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
	}
#line 1704 "src/parser.cpp"
    break;

  case 59: /* RelExp: RelExp LEQ AddExp  */
#line 364 "src/parser.y"
        {
		SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
		(yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
	}
#line 1713 "src/parser.cpp"
    break;

  case 60: /* LAndExp: RelExp  */
#line 372 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1719 "src/parser.cpp"
    break;

  case 61: /* LAndExp: LAndExp AND RelExp  */
#line 375 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1728 "src/parser.cpp"
    break;

  case 62: /* LOrExp: LAndExp  */
#line 384 "src/parser.y"
            {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1734 "src/parser.cpp"
    break;

  case 63: /* LOrExp: LOrExp OR LAndExp  */
#line 387 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1743 "src/parser.cpp"
    break;

  case 64: /* Type: INT  */
#line 397 "src/parser.y"
        {
        (yyval.type) = TypeSystem::intType;
    }
#line 1751 "src/parser.cpp"
    break;

  case 65: /* Type: VOID  */
#line 400 "src/parser.y"
           {
        (yyval.type) = TypeSystem::voidType;
    }
#line 1759 "src/parser.cpp"
    break;

  case 66: /* DeclStmt: Type VarDefList SEMICOLON  */
#line 408 "src/parser.y"
                              {
        (yyval.stmttype) = (yyvsp[-1].stmttype);
    }
#line 1767 "src/parser.cpp"
    break;

  case 67: /* VarDefList: VarDefList COMMA VarDef  */
#line 414 "src/parser.y"
                                {
            DeclStmt* node = dynamic_cast<DeclStmt*>((yyvsp[-2].stmttype));
            node->addNext(dynamic_cast<DefNode*>((yyvsp[0].stmttype)));
            (yyval.stmttype) = node;
        }
#line 1777 "src/parser.cpp"
    break;

  case 68: /* VarDefList: VarDef  */
#line 419 "src/parser.y"
               {
            DeclStmt* node = new DeclStmt(true);
            node->addNext(dynamic_cast<DefNode*>((yyvsp[0].stmttype)));
            (yyval.stmttype) = node;
        }
#line 1787 "src/parser.cpp"
    break;

  case 69: /* VarDef: ID  */
#line 428 "src/parser.y"
           {
            // 首先判断是否重定义
            if(identifiers->isRedefine((yyvsp[0].strtype))) {
                fprintf(stderr, "identifier %s redefine\n", (yyvsp[0].strtype));
                exit(EXIT_FAILURE);
            }
            // 首先将ID插入符号表中
            Type* type;
                type = TypeSystem::intType;
            SymbolEntry *se;
            se = new IdentifierSymbolEntry(type, (yyvsp[0].strtype), identifiers->getLevel());
            identifiers->install((yyvsp[0].strtype), se);
            (yyval.stmttype) = new DefNode(new Id(se), nullptr);
        }
#line 1806 "src/parser.cpp"
    break;

  case 70: /* VarDef: ID ASSIGN Exp  */
#line 442 "src/parser.y"
                      {
            // 首先判断是否重定义
            if(identifiers->isRedefine((yyvsp[-2].strtype))) {
                fprintf(stderr, "identifier %s redefine\n", (yyvsp[-2].strtype));
                exit(EXIT_FAILURE);
            }
            // 首先将ID插入符号表中
            Type* type;
            type = TypeSystem::intType;
            SymbolEntry *se;
            se = new IdentifierSymbolEntry(type, (yyvsp[-2].strtype), identifiers->getLevel());
            identifiers->install((yyvsp[-2].strtype), se);
            (yyval.stmttype) = new DefNode(new Id(se), dynamic_cast<Node*>((yyvsp[0].exprtype)));
        }
#line 1825 "src/parser.cpp"
    break;

  case 71: /* LVal: ID  */
#line 462 "src/parser.y"
         {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));//此处已检查未定义问题
            delete [](char*)(yyvsp[0].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1842 "src/parser.cpp"
    break;

  case 72: /* WhileStmt: WHILE LP Cond RP Stmt  */
#line 483 "src/parser.y"
    {
        (yyval.stmttype)=new WhileStmt((yyvsp[-2].exprtype),(yyvsp[0].stmttype));
    }
#line 1850 "src/parser.cpp"
    break;

  case 73: /* ForStmt: FOR LP AssignS SEMICOLON Cond SEMICOLON AssignS RP Stmt  */
#line 491 "src/parser.y"
    {
        (yyval.stmttype)=new ForStmt((yyvsp[-6].stmttype),(yyvsp[-4].exprtype),(yyvsp[-2].stmttype),(yyvsp[0].stmttype));
        identifiers = identifiers->getPrev();
    }
#line 1859 "src/parser.cpp"
    break;

  case 74: /* IOStmt: SCAN LP ID RP SEMICOLON  */
#line 501 "src/parser.y"
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-2].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[-2].strtype));//此处已检查未定义问题
            delete [](char*)(yyvsp[-2].strtype);
            assert(se != nullptr);
        }
        (yyval.stmttype) = new IOStmt(IOStmt::SCAN, new Id(se));
        delete [](yyvsp[-2].strtype);
    }
#line 1876 "src/parser.cpp"
    break;

  case 75: /* IOStmt: PRINT LP Exp RP SEMICOLON  */
#line 514 "src/parser.y"
    {
        (yyval.stmttype) = new IOStmt(IOStmt::PRINT, (yyvsp[-2].exprtype));
    }
#line 1884 "src/parser.cpp"
    break;


#line 1888 "src/parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 522 "src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}