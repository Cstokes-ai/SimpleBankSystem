//
// Created by corne on 1/10/2024.
//
// Compare the credentials given in Register.h
#include <stdio.h>
#include "Register.h"
#include <string.h>
void Login(User *users) {
    char inputUsername[30];
    char inputPassword[30];

    printf("What is your username? \n");
    scanf("%s", inputUsername);
    printf("Username: %s\n", inputUsername);
    printf("What is your password? \n");
    scanf("%s", inputPassword);
    printf("Password: %s\n", inputPassword);

    int numUsers = MAX_USERS;  // Assuming MAX_USERS is defined in your Register.h

    int userFound = 0;  // Flag to check if the user is found

    // Loop through the registered users
    for (int i = 0; i < numUsers; ++i) {
        int usernameMatch = strcmp(inputUsername, users[i].userName);
        int passwordMatch = strcmp(inputPassword, users[i].password);

        if (usernameMatch == 0 && passwordMatch == 0) {
            printf("Login successful!\n");
            userFound = 1;
            break;  // Exit the loop since the user is found
        }
    }

    if (!userFound) {
        printf("Login failed. Invalid username or password.\n");
    }
}