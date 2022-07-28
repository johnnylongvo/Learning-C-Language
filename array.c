#include <stdio.h>

/*
Array - a data structure that can store many values of the same data type
*/

int main() {

    // double price = 5.0;
    // char name[] = "Johnny";

    // ways to work with char arrays
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0}; //set a size right away, 5 elements filled, other 5 empty 
    printf("$%.2lf", prices[4]);    // index numbers

    // double prices[5];

    // prices[0] = 5.0;
    // prices[1] = 10.0;
    // prices[2] = 15.0;
    // prices[3] = 20.0;
    // prices[4] = 25.0;

    printf("$%.2lf", prices[4]);    // index number


    return 0;
}