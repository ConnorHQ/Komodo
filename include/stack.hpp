#ifndef STACK_HPP
#define STACK_HPP

#include <vector>


struct stack_T{
    typedef enum : int{
        OP_PUSH = 0,
        OP_POP = 1,
        OP_PLUS = 2,
        OP_DUMP = 3,
        OP_POP_ALL = 4,
        OP_DUMP_ALL = 5
    }OP; // short for operation
    stack_T(std::vector<stack_T::OP> OpStack);
    stack_T::OP push(stack_T::OP op);
    stack_T::OP pop();
    stack_T::OP dump();
    stack_T::OP dump_all();
    stack_T::OP pop_all();
    private:
        std::vector<stack_T::OP> stack;

};

#endif