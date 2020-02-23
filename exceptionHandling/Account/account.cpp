//
// Created by geek on 2/23/20.
//

#include "account.h"

void account::cash_deposite() {
    if (amount < 0)
        throw 0 ;

    balance += amount ;


}

void account::cash_withdraw() {
    if (amount < 0 || amount > balance)
        throw 0 ;

    balance -= amount ;

}