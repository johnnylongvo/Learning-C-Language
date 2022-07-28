#include <stdio.h>

int main() {
    //format specifier % = defines & format a type of data to be displayed 

    // %c = character: ASCII table for characters
    // %s = string (array of characters)
    // %f = float 
    // %lf = double 
    // %d = integer: digit

    // %.1 = decimal 
    // %1 = minimum field width 
    // %- = left align 


    // ONLINE STORE with 3 variables
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 1: $%-8.2f\n", item1); // left align
    printf("Item 1: $%8.2f\n", item1); // field width 
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.3f\n", item3);

    return 0;
}