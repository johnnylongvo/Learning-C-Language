#include <stdio.h>

void birthdaySong();

int main() {

    //ARGUMENTS: Are what you are sending a function
    //PARAMETERS: What a function expects when it is invoked

    //Functions can talk to eachother, variables within a function can be passed to another function as arguments

    char name[] = "Johnny"; // declare char variable
    int age = 22;

    birthdaySong(name, age);    // set of parenthese: passing variables as arguments 

    return 0;
}

// matching set of parameters, preseed variables with char[] & int: called parameters
void birthdaySong(char name[], int age) {
    printf("Happy Birthday dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

// this code also works too changing paramater name to x and y 
// void birthdaySong(char x[], int y) {
//     printf("Happy Birthday dear %s!\n", x);
//     printf("You are %d years old!\n", y);
// }


// With PARAMETERS, you can only call function if pass a char[] array as well as int.

