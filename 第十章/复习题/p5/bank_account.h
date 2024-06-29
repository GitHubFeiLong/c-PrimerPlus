//
// Created by chenf on 2024/6/26.
//

#ifndef CPPPRIMERPLUS_BANK_ACCOUNT_H
#define CPPPRIMERPLUS_BANK_ACCOUNT_H
#include <iostream>

class BankAccount
{
private:
    std::string name_;
    std::string card_;
    double money_;
public:
    BankAccount();
    BankAccount(std::string name, std::string card, double money);
    void show() const;
    void saveMoney(double money);
    void drawMoney(double money);
};
#endif //CPPPRIMERPLUS_BANK_ACCOUNT_H
