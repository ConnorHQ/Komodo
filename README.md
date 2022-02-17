# Komodo

##### A stack based language made in C++.
##### Komodo is a high level stack based language based of Forth
##### Currently in development and can only be used as a C++ vector of stack Operands that will be sent to the constructor of stack_T

<p>&nbsp;</p>

### Forth: https://en.wikipedia.org/wiki/Forth_(programming_language)

<p>&nbsp;</p>

## Future Example: 

```cpp
    #include <vector>
    #include <Komodo.hpp>
    

    int main(int argc, char** argv){
        std::vector<stack_T::OP> stackOp = {stack_T::OP_PLUS, stack_T::OP_POP, stack_T::OP_DUMP, stack_T::OP_POP_ALL};
        // make a vector of operands
        stack_T stack(stackOp); // initialize the stack
        return 0;
    }
```
