//
// Created by corne on 1/10/2024.
//
#include <stdio.h>
#include <string.h>
#include "Register.h"

void saveUsersToFile(const UserList* userList, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    for (size_t i = 0; i < userList->numUsers; ++i) {
        fprintf(file, "%s %s %s %s\n", userList->users[i].userName, userList->users[i].Address,
                userList->users[i].phoneNumber, userList->users[i].password);
    }

    fclose(file);
}
void addUser(UserList* userList, const User* newUser);
int readUsersFromFile(UserList* userList, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 0;  // Return 0 to indicate failure
    }

    while (fscanf(file, "%s %s %s %s", userList->users[userList->numUsers].userName,
                  userList->users[userList->numUsers].Address,
                  userList->users[userList->numUsers].phoneNumber,
                  userList->users[userList->numUsers].password) == 4) {
        addUser(userList, &userList->users[userList->numUsers]);
    }

    fclose(file);
    return 1;  // Return 1 to indicate success
}


void RegisterUser(User *user){
    printf("Welcome to the Registration System\n");
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
    printf("Password: %s\n", (*user).password);
}
