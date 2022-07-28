#include <stdio.h>

int main() {

    /*
     if statements: adds some choices to the program
     */

    int age;

    printf("Enter in your age: ");
    scanf("%d", &age);

    // signing up for credit card

    // condition to write:
    // >= , <= , == 
    if (age >= 18) { // if condition evaluates to be true
        printf("Congraulations, You have been signed up!\n");
    } // if condition is false
    else if(age == 0) {
         printf("You cannot sign up! You were just born!");
     }
    else if(age < 10) {
        printf("You cannot sign up! You are under 10 years old!");
    }
    else {
        printf("Minimum age is 18+, Sorry sign up later!\n");
    }

    return 0;
}