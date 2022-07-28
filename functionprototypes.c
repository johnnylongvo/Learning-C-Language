#include <stdio.h>

/*
function prototype

What is it?
Function declartion, without a body before main()
Ensures that calls to a function are made with the correct arguments

IMPORTANT NOTES:
Many C compilers do not check for parameter matching
Missing arguments will result in unexpected behavior
A function prototype causes the compiler to flag an error if arguments are missing

ADVANTAGES
Easier to navigate a program
Helps with debugging
Commonly used in header files

*/

void helloWorld(char[], int);  //function prototype, ensures calls made to funciton are correct

int main()
{

    char name[] = "Johnny";
    int age = 22;

    helloWorld(name, age);

    return 0;
}

void helloWorld(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}