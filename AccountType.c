//
// Created by corne on 1/12/2024.
//
#include <stdio.h>
#include<string.h>
#include "Register.h"
#include "BankAccount.h"
void Account(User *user){
    int initialDeposit;
    char accountName[50];
    printf("What is your Account Type?\n ");
    scanf("%s", accountName);
    printf("Account Name: %s\n", accountName);
    printf("Enter your Initial Deposit\n");
    scanf("%d", initialDeposit);
    printf("Initial Deposit: %s\n", initialDeposit);

}
void deposit(BankAccount *account, double amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposit successful. New balance: %.2f\n", account->balance);
    } else {
        printf("Invalid deposit amount. Please enter a positive value.\n");
    }
}
void withdraw(BankAccount *account, double amount){
    if (amount >0){
        account -> balance -= amount;
        printf("Withdraw Successful. New balance is %.2f\n", account->balance);
    }
    else{
        printf("No Withdrawal has been made.\n ");
    }
}