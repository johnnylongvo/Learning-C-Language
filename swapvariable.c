#include <stdio.h>
#include <string.h>

// Swap value of 2 variables: sorting algorithms
int main() {

/*
    char x = 'X';
    char y = 'Y';
    char temp; // temporary variable: temporary storage for some value

    temp = x;
    x = y;
    y = temp;

    // x = y;
    // y = x;

    printf("x = %c\n", x); //%c for characters
    printf("y = %c\n", y);
    */

    char x[15] = "water"; // character arrays
    char y[15] = "soda"; // character arrays
    char temp[15];

    strcpy(temp, x); // copy contents of x over to temp
    strcpy(x, y);   // copy y over to x
    strcpy(y, temp);    // copy temp over to y 

    printf("x = %s\n", x); //%s for strings
    printf("y = %s\n", y);

    return 0;
}