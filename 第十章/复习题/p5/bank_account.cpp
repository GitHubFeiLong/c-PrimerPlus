//
// Created by chenf on 2024/6/26.
//
#include <iostream>
#include "bank_account.h"
BankAccount::BankAccount()
{
    std::cout << "无参数构造方法" << std::endl;
}

BankAccount::BankAccount(std::string name, std::string card, double money)
{
    std::cout << "有参数构造方法" << std::endl;
    name_ = name;
    card_ = card;
    money_ = money;
}

void BankAccount::show() const
{
    std::cout << "姓名：" << name_ << "\n"
              << "卡号：" << card_ << "\n"
              << "余额：" << money_ << std::endl;
}

void BankAccount::saveMoney(double money)
{
    if (money > 0)
        money_ += money;
    else
        std::cout << "money error" << std::endl;
}

void BankAccount::drawMoney(double money)
{
    if (money > 0 && money_ - money >= 0)
        money_ -= money;
    else
        std::cout << "money error" << std::endl;
}