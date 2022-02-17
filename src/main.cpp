#include <iostream>
#include <main.hpp>
 

int main(int argc, char** argv){
    std::vector<stack_T::OP> stackOp = {stack_T::OP_PLUS, stack_T::OP_POP, stack_T::OP_DUMP, stack_T::OP_POP_ALL};
    
    
    if (argc < 2) {
        error("Expected More Interperter Flags!");
    } else if(strcmp(argv[2], "interpet")) {
        stack_T stack(stackOp);
    }

    return 0;
}
