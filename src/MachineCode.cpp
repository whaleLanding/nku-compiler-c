#include "MachineCode.h"
extern FILE* yyout;

MachineOperand::MachineOperand(int tp, int val)
{
    this->type = tp;
    if(tp == MachineOperand::IMM)
        this->val = val;
    else 
        this->reg_no = val;
}

MachineOperand::MachineOperand(std::string label)
{
    this->type = MachineOperand::LABEL;
    this->label = label;
}

bool MachineOperand::operator==(const MachineOperand&a) const
{
    if (this->type != a.type)
        return false;
    if (this->type == IMM)
        return this->val == a.val;
    return this->reg_no == a.reg_no;
}

bool MachineOperand::operator<(const MachineOperand&a) const
{
    if(this->type == a.type)
    {
        if(this->type == IMM)
            return this->val < a.val;
        return this->reg_no < a.reg_no;
    }
    return this->type < a.type;

    if (this->type != a.type)
        return false;
    if (this->type == IMM)
        return this->val == a.val;
    return this->reg_no == a.reg_no;
}

void MachineOperand::PrintReg()
{
    switch (reg_no)
    {
    case 11:
        fprintf(yyout, "fp");
        break;
    case 13:
        fprintf(yyout, "sp");
        break;
    case 14:
        fprintf(yyout, "lr");
        break;
    case 15:
        fprintf(yyout, "pc");
        break;
    default:
        fprintf(yyout, "r%d", reg_no);
        break;
    }
}

void MachineOperand::output() 
{
    /* 提示：打印操作数
    * Example:
    * immediate num 1 -> print #1;
    * register 1 -> print r1;
    * lable addr_a -> print addr_a; */
    switch (this->type)
    {
    case IMM:
        fprintf(yyout, "#%d", this->val);
        break;
    case VREG:
        fprintf(yyout, "v%d", this->reg_no);
        break;
    case REG:
        PrintReg();
        break;
    case LABEL:
        if (this->label.substr(0, 2) == ".L")
            fprintf(yyout, "%s", this->label.c_str());
        else
            fprintf(yyout, "addr_%s", this->label.c_str());
    default:
        break;
    }
}

void MachineInstruction::PrintCond()
{
    // TODO: 实现其他条件码的打印逻辑
    switch (cond)
    {
    case LT:
        fprintf(yyout, "lt");
        break;
    default:
        break;
    }
}

BinaryMInstruction::BinaryMInstruction(
    MachineBlock* p, int op, 
    MachineOperand* dst, MachineOperand* src1, MachineOperand* src2, 
    int cond)
{
    this->parent = p;
    this->type = MachineInstruction::BINARY;
    this->op = op;
    this->cond = cond;
    this->def_list.push_back(dst);
    this->use_list.push_back(src1);
    this->use_list.push_back(src2);
    dst->setParent(this);
    src1->setParent(this);
    src2->setParent(this);
}

void BinaryMInstruction::output() 
{
    // TODO: 完成其他二元指令的输出逻辑
    switch (this->op)
    {
    case BinaryMInstruction::ADD:
        fprintf(yyout, "\tadd ");
        this->PrintCond();
        this->def_list[0]->output();
        fprintf(yyout, ", ");
        this->use_list[0]->output();
        fprintf(yyout, ", ");
        this->use_list[1]->output();
        fprintf(yyout, "\n");
        break;
    case BinaryMInstruction::SUB:
        break;
    default:
        break;
    }
}

LoadMInstruction::LoadMInstruction(MachineBlock* p,
    MachineOperand* dst, MachineOperand* src1, MachineOperand* src2,
    int cond)
{
    this->parent = p;
    this->type = MachineInstruction::LOAD;
    this->op = -1;
    this->cond = cond;
    this->def_list.push_back(dst);
    this->use_list.push_back(src1);
    if (src2)
        this->use_list.push_back(src2);
    dst->setParent(this);
    src1->setParent(this);
    if (src2)
        src2->setParent(this);
}

void LoadMInstruction::output()
{
    fprintf(yyout, "\tldr ");
    this->def_list[0]->output();
    fprintf(yyout, ", ");

    // Load immediate num, eg: ldr r1, =8
    if(this->use_list[0]->isImm())
    {
        fprintf(yyout, "=%d\n", this->use_list[0]->getVal());
        return;
    }

    // Load address
    if(this->use_list[0]->isReg()||this->use_list[0]->isVReg())
        fprintf(yyout, "[");

    this->use_list[0]->output();
    if( this->use_list.size() > 1 )
    {
        fprintf(yyout, ", ");
        this->use_list[1]->output();
    }

    if(this->use_list[0]->isReg()||this->use_list[0]->isVReg())
        fprintf(yyout, "]");
    fprintf(yyout, "\n");
}

StoreMInstruction::StoreMInstruction(MachineBlock* p,
    MachineOperand* src1, MachineOperand* src2, MachineOperand* src3, 
    int cond)
{
    // TODO: 初始化存储指令
}

void StoreMInstruction::output()
{
    // TODO: 实现存储指令的输出逻辑
}

MovMInstruction::MovMInstruction(MachineBlock* p, int op, 
    MachineOperand* dst, MachineOperand* src,
    int cond)
{
    // TODO: 初始化移动指令
}

void MovMInstruction::output() 
{
    // TODO: 实现移动指令的输出逻辑
}

BranchMInstruction::BranchMInstruction(MachineBlock* p, int op, 
    MachineOperand* dst, 
    int cond)
{
    // TODO: 初始化分支指令
}

void BranchMInstruction::output()
{
    // TODO: 实现分支指令的输出逻辑
}

CmpMInstruction::CmpMInstruction(MachineBlock* p, 
    MachineOperand* src1, MachineOperand* src2, 
    int cond)
{
    // TODO: 初始化比较指令
}

void CmpMInstruction::output()
{
    // TODO: 实现比较指令的输出逻辑
}

StackMInstrcuton::StackMInstrcuton(MachineBlock* p, int op, 
    MachineOperand* src,
    int cond)
{
    // TODO: 初始化栈操作指令
}

void StackMInstrcuton::output()
{
    // TODO: 实现栈操作指令的输出逻辑
}

MachineFunction::MachineFunction(MachineUnit* p, SymbolEntry* sym_ptr) 
{ 
    this->parent = p; 
    this->sym_ptr = sym_ptr; 
    this->stack_size = 0;
};

void MachineBlock::output()
{
    fprintf(yyout, ".L%d:\n", this->no);
    for(auto iter : inst_list)
        iter->output();
}

void MachineFunction::output()
{
    const char *func_name = this->sym_ptr->toStr().c_str() + 1;
    fprintf(yyout, "\t.global %s\n", func_name);
    fprintf(yyout, "\t.type %s , %%function\n", func_name);
    fprintf(yyout, "%s:\n", func_name);
    // TODO: 
    /* 提示:
    *  1. 保存fp
    *  2. fp = sp
    *  3. 保存被调用者保存的寄存器
    *  4. 为局部变量分配栈空间 */
    
    // Traverse all the block in block_list to print assembly code.
    for(auto iter : block_list)
        iter->output();
}

void MachineUnit::PrintGlobalDecl()
{
    // TODO: 你需要打印全局变量/常量声明代码
}

void MachineUnit::output()
{
    // TODO: 
    /* 提示:
    * 1. 你需要打印全局变量/常量声明代码
    * 2. 遍历func_list中的所有函数以打印汇编代码*/
    fprintf(yyout, "\t.arch armv8-a\n");
    fprintf(yyout, "\t.arch_extension crc\n");
    fprintf(yyout, "\t.arm\n");
    PrintGlobalDecl();
    for(auto iter : func_list)
        iter->output();
}
