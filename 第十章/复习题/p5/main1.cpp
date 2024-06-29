//
// Created by chenf on 2024/6/26.
//
#include <iostream>
#include "bank_account.h"
int main()
{
    BankAccount * account1 = new BankAccount();
//    BankAccount account2;
//    BankAccount account3{};
//    BankAccount account4("张三", "6217138912391", 0);

    account1 -> show();
//    account2.show();
//    account3.show();
//    account4.show();
    return 0;
}