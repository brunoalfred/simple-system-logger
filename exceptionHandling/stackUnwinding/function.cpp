//
// Created by geek on 2/12/20.
//

#include "function.h"
#include <iostream>

//implementing the methods

void function::fun_a() {

    std::cout << "Starting function A " << std::endl ;
    fun_b () ;
    std::cout << "Ending function B" << std::endl ;

}

void function::fun_b () {
    std::cout << "Starting function B " << std::endl ;
    try {

        fun_c () ;
    }
    throw 0 ;
    std::cout << "Ending function B" << std::endl ;

}

void function::fun_c (){
    std::cout << "Starting function C" << std::endl ;
    std::cout << "Ending function C" << std::endl ;
}