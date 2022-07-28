#include <stdio.h>

/*
bitwise operator - special operators used in bit level programming
    (knowing binary is important)

    & = AND 
    | = OR 
    ^ = XOR 
    << left shift
    >> right shift
*/

int main() {

    int x = 6;  //             6 = 00000110
    int y = 12; //            12 = 00001100
    int z = 0; // store result 0 = 00000000

    z = x & y;
    printf("AND = %d\n", z); 
    //  6 =  00000110
    //  12 = 00001100
    //       00000100 = 4

    z = x | y;
    printf("OR = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100
    //       00001110 = 14

    z = x ^ y;
    printf("XOR = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100
    //       00001010 = 10

    z = x << 1;     //left-shift by 1
    printf("Left Shift by 1 = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100

    //       00000110   shift bit one spot to the left
    //  6 =  00001100 = 12

    z = x << 2;     //left-shift by 2
    printf("Left Shift by 2 = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100

    //       00000110   shift bit 2 spot to the left
    //  6 =  00011000 = 24

    z = x >> 1;     //right-shift by 1
    printf("Right Shift by 1 = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100

    //  6 =  00000110   shift bit one spot to the right
    //  6 =  00000011 = 3

    z = x >> 2;     //right-shift by 2
    printf("Right Shift by 2 = %d\n", z);
    //  6 =  00000110
    //  12 = 00001100

    //  6 =  00000110   shift bit 2 spot to the right
    //  6 =  00000001 = 1

    return 0;
}