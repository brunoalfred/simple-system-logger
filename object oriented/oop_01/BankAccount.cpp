//
// Created by geek on 1/21/20.
//

#include "BankAccount.h"
#include <iostream>
using namespace std ;

void BankAccount::set (int dollars, int cents, int rate){

    cout << " Set the account balance : " << endl ;
    cin >> dollars >> cents >> rate ;

    if ((dollars < 0) || (cents < 0) || (rate < 0)){

        cout << "It's an illegal value of money or interest Rate \n " ;
        exit(1) ;

    }

    else
        balance = dollars + 0.01*cents ;
         interest_rate = rate ;
}

void BankAccount::set (int dollars, int rate) {

    if ((dollars < 0) || (rate < 0)){

        cout << "It's an illegal value of money or interest Rate \n " ;
        exit(1) ;

    }

    else
        balance = dollars ;
         interest_rate = rate ;

}

void BankAccount::update() {

    balance = balance + fraction(interest_rate)* balance ;
}

double BankAccount::fraction(double percent) {

    return (percent/100) ;

}

double BankAccount::get_balance() {

    return balance ;
}

double BankAccount::get_rate() {

    return interest_rate ;

}

//void BankAccount::output(int &outs) {

    




//}