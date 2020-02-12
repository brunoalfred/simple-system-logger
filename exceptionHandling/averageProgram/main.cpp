#include <iostream>


//Function prototyping
double averageFunction (int sum_of_terms, int number_of_terms) ;

int main() {

//    Prompting the user to enter the values
    std::cout << "Welcome to my Program !!" << std::endl ;
    std::cout << "Enter The sum of terms : " << std::endl ;
    int sum_of_terms {};
    std::cin >> sum_of_terms ;

    std::cout << "Enter The number of Terms : " << std::endl ;
    int number_of_terms {};
    std::cin >> number_of_terms ;

//    calling the function
    try {

        double result = averageFunction(sum_of_terms, number_of_terms);
        std::cout << "The average : "<< result << std::endl ;
    }


//    Declaring the exception handling
    catch (int &exe){

        std::cerr << "Can't divide by zero" << std::endl ;

    }

    __catch(std::string &exe){

        std::cerr << exe << std::endl ;
    }


}

double averageFunction (int sum_of_terms, int number_of_terms){

//    exception when the error is due to denominator being zero
    if (number_of_terms == 0)
        throw 0;

    if (sum_of_terms < 0 || number_of_terms < 0)
        throw std::string{"The error due to negative value"} ;

//    calculating the average
    return static_cast<double> (sum_of_terms) /number_of_terms ;


}