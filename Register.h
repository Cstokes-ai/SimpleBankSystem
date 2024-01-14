//
// Created by corne on 1/10/2024.
//
#include <stdio.h>
#ifndef SIMPLEBANKSYSTEM_REGISTER_H
#define SIMPLEBANKSYSTEM_REGISTER_H
#define MAX_USERS 50
typedef struct{
    char userName[50];
    char Address[50];
    char phoneNumber[50];
    char password[50];
    char Name[50];
} User;
typedef struct {
    User* users;
    size_t numUsers;
} UserList;
void saveUsersToFile(const UserList* userList, const char* filename);
int readUsersFromFile(UserList* userList, const char* filename);
void RegisteredUser(User *user) {
    /*printf("Welcome to the Registration System\n");
    printf("What is your Username? \n");
    fgets((*user).userName, sizeof((*user).userName), stdin);
    printf("Username: %s\n", (*user).userName);
    printf("What is your Address? \n");
    fgets((*user).Address, sizeof((*user).Address), stdin);
    printf("Address: %s\n", (*user).Address);
    printf("What is your phone number? \n");
    fgets((*user).phoneNumber,sizeof((*user).phoneNumber), stdin);
    printf("Phone Number: %s\n", (*user).phoneNumber);
    printf("What is your Password? \n");
    fgets((*user).password,sizeof((*user).password),stdin);
    printf("Password: %s\n", (*user).password);*/

}
#endif //SIMPLEBANKSYSTEM_REGISTER_H
