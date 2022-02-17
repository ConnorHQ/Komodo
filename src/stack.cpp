#include <stdio.h>
#include <vector>

#include "error.hpp"
#include "stack.hpp"

stack_T::stack_T(std::vector<stack_T::OP> op) {
    this->stack = op;
    for (size_t i = 0; i < op.size(); i++){
        if (op[i] == stack_T::OP_DUMP){
            dump();
        } else if (op[i] == stack_T::OP_PLUS){
            printf("op plus\n");
        } else if(op[i] == stack_T::OP_POP) {
            pop();
        } else if(op[i] == stack_T::OP_PUSH) {
            push(stack_T::OP_POP_ALL);
        } else if(op[i] == stack_T::OP_DUMP_ALL){
            dump_all();
        } else if(op[i] == stack_T::OP_POP_ALL) {
            pop_all();
        }
    }
}

stack_T::OP stack_T::pop() {

    this->stack.erase(this->stack.begin());
    
    printf("Popping out");
    return (stack_T::OP_POP);
}

stack_T::OP stack_T::dump() {
    size_t stackSize = this->stack.size();

    printf("%s", this->stack[0]);

    return (stack_T::OP_DUMP);
}

stack_T::OP stack_T::push(stack_T::OP op) {
    this->stack.insert(stack.begin(), op);
    
    return (stack_T::OP_PUSH);
}

stack_T::OP stack_T::dump_all() {
    for (size_t i = 0; i < this->stack.size(); i++){
        printf("%s", this->stack[i]);
    }
    return (stack_T::OP_DUMP_ALL);
}

stack_T::OP stack_T::pop_all() {
    this->stack.clear();

    return (stack_T::OP_POP_ALL);
}