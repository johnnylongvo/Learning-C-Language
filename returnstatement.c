#include <stdio.h>

// return - returns a value back to the calling function

double square(double x) {

    return x * x;

    // this code also works too!
    // double result = x * x;
    // return result;  // list the datatype of what we are returning from function declaration
}

int main() {

    double x = square(3.14);
    printf("%lf\n", x); // %lf for double

    return 0;
}


// double square(double x) {

//     double result = x * x;
//     return result;
// }

// int square(double x) {

//     double result = x * x;
//     return int;
// }

// char square(double x) {

//     double result = x * x;
//     return char;
// }