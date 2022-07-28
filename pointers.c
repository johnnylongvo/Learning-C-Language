#include <stdio.h>
/*
pointers - a "variable-like" reference that holds a 
            memory address to another variables, array, etc.
            some tasks are performed more easily with pointers.
            * = indirection operator (value at address)

  ADVANTAGES: 
  less time in program execution, working on original variable,
  with help of pointers we can create data structures (linkedlist, stack, queue),
  return more than 1 values from functions, searching/sorting large data easily, 
  dynamically memory allocation          
*/

void printAge(int age) {
    printf("You are %d years old\n", age);
}

void printpAge(int *pAge) {
    printf("Yes, I am %d years old\n", *pAge); //dereference - to access value of the address stored within pointer
}

int main() {

    // int age = 22;  // variable has a value and an address
    // int *pAge = &age; // creating a pointer, store address

    int age = 22;
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;

    //char *pAge = &age; // creating a pointer, store address       output: WARNING

    printf("address of age: %p\n", &age); //%p to display address: & is address of operator
    printf("address of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // * dereference operator, extract value at address

    printAge(age);
    printpAge(pAge);

    return 0;
}