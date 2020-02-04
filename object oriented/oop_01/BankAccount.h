//
// Created by geek on 1/21/20.
//

#ifndef BRUNO_BANKACCOUNT_H
#define BRUNO_BANKACCOUNT_H


//#include "iostream"

//#include <iostream>
//#include <string>



//Class for a bank Account

class BankAccount {



public:
//    account balance has been set to dollars.cent
    void set(int dollars, int cents, int rate) ;

//     account balance has been set to dollars
    void set (int dollars, int rate) ;

//    one year of interest rate has been added to the account balance
    void update () ;

//    return the balance of the account
    double get_balance () ;

//    return the account current interest rate as per current time.
    double get_rate () ;

//    outputting the records to a specified file
//    void output (ostream& outs) ;


private:
    double balance ;
    double interest_rate ;
    double fraction (double percent) ;






};

#endif //BRUNO_BANKACCOUNT_H
