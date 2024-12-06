#ifndef __AST_H__
#define __AST_H__

#include <fstream>
#include "Operand.h"
#include <stack>

class SymbolEntry;
class Unit;
class Function;
class BasicBlock;
class Instruction;
class IRBuilder;

class Node
{
private:
    static int counter;
    int seq;

protected:
    std::vector<Instruction *> true_list;
    std::vector<Instruction *> false_list;
    static IRBuilder *builder;
    void backPatch(std::vector<Instruction *> &list, BasicBlock *target);
    std::vector<Instruction *> merge(std::vector<Instruction *> &list1, std::vector<Instruction *> &list2);

public:
    Node();
    int getSeq() const { return seq; };
    static void setIRBuilder(IRBuilder *ib) { builder = ib; };
    virtual void output(int level) = 0;
    virtual void typeCheck() = 0;
    virtual void genCode() = 0;
    std::vector<Instruction *> &trueList() { return true_list; }
    std::vector<Instruction *> &falseList() { return false_list; }
};

class ExprNode : public Node
{
protected:
    SymbolEntry *symbolEntry;
    Operand *dst; // The result of the subtree is stored into dst.
public:
    ExprNode(SymbolEntry *symbolEntry) : symbolEntry(symbolEntry) {};
    Operand *getOperand() { return dst; };
    SymbolEntry *getSymPtr() { return symbolEntry; };
};

class BinaryExpr : public ExprNode
{
private:
    int op;
    ExprNode *expr1, *expr2;

public:
    enum
    {
        ADD,
        SUB,
        MUL,
        DIV,
        MOD,
        AND,
        OR,
        LESS,
        LEQ,
        GEQ,
        GREATER,
        EQ,
        NEQ,
        NOT,

    };

    BinaryExpr(SymbolEntry *se, int op, ExprNode *expr1, ExprNode *expr2) : ExprNode(se), op(op), expr1(expr1), expr2(expr2) { dst = new Operand(se); };
    // 单目
    BinaryExpr(SymbolEntry *se, int op, ExprNode *expr1) : ExprNode(se), op(op), expr1(expr1) { dst = new Operand(se); };

    void output(int level);
    void typeCheck();
    void genCode();
};

class Constant : public ExprNode
{
public:
    Constant(SymbolEntry *se) : ExprNode(se) { dst = new Operand(se); };
    void output(int level);
    void typeCheck();
    void genCode();
};

class Id : public ExprNode
{
public:
    Id(SymbolEntry *se) : ExprNode(se)
    {
        dst = new Operand(se);
    };
    void output(int level);
    void typeCheck();
    void genCode();
};

class StmtNode : public Node
{
};

class CompoundStmt : public StmtNode
{
private:
    StmtNode *stmt;

public:
    CompoundStmt(StmtNode *stmt) : stmt(stmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class SeqNode : public StmtNode
{
private:
    std::vector<StmtNode *> stmtList;

public:
    SeqNode() {};

    void output(int level);
    void typeCheck();
    void genCode();
    void addNext(StmtNode *next);
};

class DefNode : public StmtNode
{
private:
    Id *id;
    Node *initVal; // 对于非数组，是ExprNode
public:
    DefNode(Id *id, Node *initVal) : id(id), initVal(initVal) {};
    Id *getId() { return id; }
    void output(int level);
    void typeCheck();
    void genCode();
};

class DeclStmt : public StmtNode
{
private:
    bool isConst;
    std::vector<DefNode *> defList;

public:
    DeclStmt(bool isConst) : isConst(isConst) {};
    void addNext(DefNode *next);
    void output(int level);
    void typeCheck();
    void genCode();
};

class IfStmt : public StmtNode
{
private:
    ExprNode *cond;
    StmtNode *thenStmt;

public:
    IfStmt(ExprNode *cond, StmtNode *thenStmt) : cond(cond), thenStmt(thenStmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class IfElseStmt : public StmtNode
{
private:
    ExprNode *cond;
    StmtNode *thenStmt;
    StmtNode *elseStmt;

public:
    IfElseStmt(ExprNode *cond, StmtNode *thenStmt, StmtNode *elseStmt) : cond(cond), thenStmt(thenStmt), elseStmt(elseStmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class ReturnStmt : public StmtNode
{
private:
    ExprNode *retValue;
public:
    ReturnStmt(ExprNode*retValue) : retValue(retValue) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class AssignStmt : public StmtNode
{
private:
    ExprNode *lval;
    ExprNode *expr;

public:
    AssignStmt(ExprNode *lval, ExprNode *expr) : lval(lval), expr(expr) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class WhileStmt : public StmtNode
{
private:
    ExprNode *Cond;
    StmtNode *stmt;
    BasicBlock *cond_bb;
    BasicBlock *stmt_bb;
    BasicBlock *end_bb;

public:
    WhileStmt(ExprNode *Cond, StmtNode *Stmt) : Cond(Cond), stmt(Stmt) {};
    BasicBlock *getCondBB() { return cond_bb; }
    BasicBlock *getEndBB() { return end_bb; }
    BasicBlock *getStmtBB() { return stmt_bb; }
    void output(int level);
    void typeCheck();
    void genCode();
};

class ContinueStmt : public StmtNode
{
private:
    StmtNode *whileStmt;

public:
    ContinueStmt(StmtNode *whileStmt) : whileStmt(whileStmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class BreakStmt : public StmtNode
{
private:
    StmtNode *whileStmt;

public:
    BreakStmt(StmtNode* whileStmt):whileStmt(whileStmt){};
    void output(int level);
    void typeCheck();
    void genCode();
};

class ForStmt : public StmtNode
{
private:
    StmtNode *initStmt;
    ExprNode *Cond;
    StmtNode *loopStmt;
    StmtNode *stmt;

    BasicBlock *init_bb;
    BasicBlock *cond_bb;
    BasicBlock *loop_bb;
    BasicBlock *end_bb;
    BasicBlock *stmt_bb;

public:
    ForStmt(StmtNode *initStmt, ExprNode *Cond, StmtNode *loopStmt, StmtNode *Stmt) : initStmt(initStmt), Cond(Cond), loopStmt(loopStmt), stmt(Stmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class FunctionDef : public StmtNode
{
private:
    SymbolEntry *se;
    StmtNode *stmt;

public:
    FunctionDef(SymbolEntry *se, StmtNode *stmt) : se(se), stmt(stmt) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class IOStmt : public StmtNode
{
private:
    int op;
    ExprNode *expr;

public:
    enum
    {
        PRINT,
        SCAN
    };
    IOStmt(int op, ExprNode *expr) : op(op), expr(expr) {};
    void output(int level);
    void typeCheck();
    void genCode();
};

class Ast
{
private:
    Node *root;

public:
    Ast() { root = nullptr; }
    void setRoot(Node *n) { root = n; }
    void output();
    void typeCheck();
    void genCode(Unit *unit);
};

static std::stack<WhileStmt *> whileStack;
static std::stack<ForStmt *> forStack;

#endif
