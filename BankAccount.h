//
// Created by corne on 1/12/2024.
//

#ifndef SIMPLEBANKSYSTEM_BANKACCOUNT_H
#define SIMPLEBANKSYSTEM_BANKACCOUNT_H
typedef struct{
    int accountNumber;
    double balance;
} BankAccount;
void initializeAccount(BankAccount *account, int accountNumber, double initialBalance);
void deposit(BankAccount *account, double amount);

#endif //SIMPLEBANKSYSTEM_BANKACCOUNT_H
