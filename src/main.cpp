#include <iostream>
#include <Komodo.hpp>
 

int main(int argc, char** argv){
    std::vector<stack_T::OP> stackOp = {stack_T::OP_PLUS, stack_T::OP_POP, stack_T::OP_DUMP, stack_T::OP_POP_ALL};
    
    stack_T stack(stackOp);
    return 0;
}
