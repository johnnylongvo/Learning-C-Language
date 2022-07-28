#include <stdio.h>
#include <stdbool.h>

int main() {

/* 
        && = AND
        !! = OR 
        ! = NOT 

logical operators = ! (NOT) reverses the state of a condition
*/

bool sunny = false;

    if (!sunny) {
        printf("It is a cloudy day outside.\n");
    }
    else
    {
        printf("It is a sunny day today.\n");
    }

return 0;
}