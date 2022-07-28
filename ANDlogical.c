#include <stdio.h>
#include <stdbool.h>

// Create a program that checks if a given temp falls between a range
int main() {

/* 
        && = AND
        !! = OR 
        ! = NOT 

logical operators = && (AND) checks if two conditions are true
*/

float temp = 25;
bool sunny = true;

if (temp >= 0 && temp <= 30 && sunny) { // sunny == 1 or sunny == true : will still mean true 
    printf("The weather is nice!\n");

}
else {
    printf("The weather is bad!\n");
}

}