#include <iostream>

int main() {

//    declaration of variables
    std::cout << "Enter the value os miles : " << std::endl ;
    int miles {};
    std::cin >> miles ;

    std::cout << "Enter the value of gallons used : " << std::endl ;
    int  gallons {};
    std::cin >> gallons ;

    double mile_per_gallons {};



//    handling the exception when number of gallons used is zero;
try {
    if (gallons == 0)
        throw 0;
//  performing the computation
    mile_per_gallons = static_cast<double> (miles) / gallons ;
    std::cout << "The result is : " << std::endl ;

}

catch (int &exe){

    std::cerr << "Can't divide by zero !" << std::endl ;

}

}
