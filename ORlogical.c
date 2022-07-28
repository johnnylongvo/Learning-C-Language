#include <stdio.h>
#include <stdbool.h>

// Create a program that checks if a given temp falls between a range
int main() {

/* 
        && = AND
        !! = OR 
        ! = NOT 

logical operators = || (OR) checks if at least one condition is true
*/

float temp = 25;


if (temp <= 0 || temp >= 30) { 
    printf("The weather is bad!\n");
}
// else if (temp >= 30) {
//     printf("The weather is bad!\n");
// }
else {
    printf("The weather is good!\n");
}

return 0;
}