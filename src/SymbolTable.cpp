#include "SymbolTable.h"
#include "Type.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <iomanip>
extern FILE *yyout;

SymbolEntry::SymbolEntry(Type *type, int kind)
{
    this->type = type;
    this->kind = kind;
}

ConstantSymbolEntry::ConstantSymbolEntry(Type *type, int value) : SymbolEntry(type, SymbolEntry::CONSTANT)
{
    this->value = value;
}

std::string ConstantSymbolEntry::toStr()
{
    std::ostringstream buffer;
    buffer << value;
    return buffer.str();
}

IdentifierSymbolEntry::IdentifierSymbolEntry(Type *type, std::string name, int scope) : SymbolEntry(type, SymbolEntry::VARIABLE), name(name)
{
    this->scope = scope;
    addr = nullptr;
}

std::string IdentifierSymbolEntry::toStr()
{
    return "@" + name;
}

void IdentifierSymbolEntry::outputFuncDecl()
{

    if (this->type->isInt())
    {
        fprintf(yyout, "@%s = dso_local global %s %d\n", this->name.c_str(), this->type->toStr().c_str(), (int)value);
    }
}

TemporarySymbolEntry::TemporarySymbolEntry(Type *type, int label) : SymbolEntry(type, SymbolEntry::TEMPORARY)
{
    this->label = label;
}

std::string TemporarySymbolEntry::toStr()
{
    std::ostringstream buffer;
    buffer << "%t" << label;
    return buffer.str();
}

SymbolTable::SymbolTable()
{
    prev = nullptr;
    level = 0;
}

SymbolTable::SymbolTable(SymbolTable *prev)
{
    this->prev = prev;
    this->level = prev->level + 1;
}

/*
    Description: lookup the symbol entry of an identifier in the symbol table
    Parameters:
        name: identifier name
    Return: pointer to the symbol entry of the identifier

    提示:
    1. The symbol table is a stack. The top of the stack contains symbol entries in the current scope.
    2. Search the entry in the current symbol table at first.
    3. If it's not in the current table, search it in previous ones(along the 'prev' link).
    4. If you find the entry, return it.
    5. If you can't find it in all symbol tables, return nullptr.
*/
SymbolEntry *SymbolTable::lookup(std::string name)
{
    // TODO: 查找标识符在符号表中的符号项
    std::map<std::string, SymbolEntry *>::iterator iter = symbolTable.find(name);
    if (iter != symbolTable.end())
        return iter->second;
    if (prev != nullptr)
        return prev->lookup(name);
    return nullptr;
}

bool SymbolTable::isRedefine(std::string name)
{
    if (symbolTable.find(name) != symbolTable.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// install the entry into current symbol table.
void SymbolTable::install(std::string name, SymbolEntry *entry)
{
    symbolTable[name] = entry;
}

int SymbolTable::counter = 0;
static SymbolTable t;
SymbolTable *identifiers = &t;
SymbolTable *globals = &t;
