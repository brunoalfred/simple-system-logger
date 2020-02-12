#include <iostream>
#include "ExceptionHandlerClasses.h"


//prototyping the function A

double functionOfVelocity (int metres, int time) ;



int main() {

//    Prompting the user to enter the values
    std::cout << "Enter the distsnce moved in meters : " << std::endl ;
    int distance_moved {};
    std::cin >> distance_moved ;

    std::cout << "Enter the time taken : " << std::endl ;
    int time_taken {};
    std::cin >> time_taken ;

    try {
        double result = functionOfVelocity(distance_moved, time_taken) ;
        std::cout << "The velocity of the Object is : " << result << std::endl ;

    }

    catch (const DivideByZeroException &exception){
        std::cerr << "Can't divide by zero !" << std::endl ;
    }

    catch (const NegativeValueException &exception1){

        std::cerr << "No negative values allowed !!" << std::endl ;
    }
    return 0;
}

//defining the function
double functionOfVelocity (int metres, int time)
{
    if (time == 0)
        throw DivideByZeroException() ;

    if (metres < 0 || time < 0)
        throw NegativeValueException() ;

    return static_cast<double> (metres) / time ;


}
