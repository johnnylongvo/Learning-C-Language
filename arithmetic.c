#include <stdio.h>

int main() {

    //arithmetic operators

    // + (addition)
    // - (substraction)
    // * (division)
    // % (modulus)  : remainder of division 
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;
    //float y = 2;
    //double y = 2;

    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y; // output: 2
    float e = x / (float) y;
    //float e = x / (double) y;
    int f = x % y;

    // need to increment x
    x++;

    //need to decrement y
    y--;

    printf("x + y = %d\n", a);
    printf("x - y = %d\n", b);
    printf("x * y = %d\n", c);
    printf("x / y = %d\n", d);
    printf("x / (float) y = %f\n", e);
    printf("x modulo y = %d\n", f);
    printf("x++ = %d\n", x);
    printf("y-- = %d\n", y);

    return 0;
}