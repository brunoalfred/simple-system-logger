#include <iostream>

double miles_per_gallons (int miles, int gallons)

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

    double mile_per_gallons = mile_per_gallons (miles, gallons)
    std::cout << "The result is : " << mile_per_gallons <<  std::endl ;

}

catch (int &exe){

    std::cerr << "Can't divide by zero !" << std::endl ;

}

}

double miles_per_gallon (int miles, int gallons)
{
    if (gallons == 0)
        throw 0;
//  performing the computation
    return static_cast<double> (miles) / gallons ;

}