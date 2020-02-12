#include <iostream>
#include "function.h"

function obj1 ;
//prototyping the function A



int main() {
    std::cout << "Program with unwinding the stack" << std::endl;
    try {
        obj1.fun_a() ;
    }

    __catch(int &exe){

        std::cerr << "Error caught ! " << std::endl ;

    }

    return 0;
}



