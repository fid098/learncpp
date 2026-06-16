#include <iostream>

#define MY_NAME "Alex" // a way of assigning names to literals in C
// not necessary anymore as we have methods now

// without substitution text -Conditional compilation
#define PRINT_JOE

int main()
{

#ifdef PRINT_JOE
    std::cout << "My name is: " << MY_NAME << "\n"; // will be compiled since print_joe is defined
#endif

// this is just ignored
#ifdef PRINT_BOB
    std::cout << "will not compile \n";
#endif

// if 0
#if 0
    std::cout << "this doesnt compile too as it is in the 0 block \n";
#endif // until this point

    return 0;
}