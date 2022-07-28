#include <stdio.h>

/*
Ternary operator = shortcut to if/else when assigning/returning a value 
(condition) ? value if true : value if false
*/

int findingMax();

//Program finding maximum of 2 integers
int main() {

    int max = findingMax(5, 14);

    printf("%d\n", max);

    return 0;
}

int findingMax(int x, int y) {
    // if (x > y) {
    //     return x;
    // } else {
    //     return y;
    // }
    return (x > y) ? x : y; // return condition (x > y) ? value returning if true x : value returning if condiiton is false y ;
}