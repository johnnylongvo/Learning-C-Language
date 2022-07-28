#include <stdio.h>
/*
    memory - an array of bytes within RAM (street) 
    memory block - a single unit (byte) within memory, used to hold some value (person)
    memory address - the address of where a memory block is located (house address)

    memory is an array of bytes within RAM, think a street containing houses, each house is a memory block
    that can hold some value, each value as a person living in that house, in order to find person.
    we have to know the address, like a street address
*/

int main() {

    char a = 'X'; //memory block = char a , memory address = X
    char b = 'Y';   // char uses 1 bytes
    char c = 'Z';
    short d = 'A';  // short uses 2 bytes
    short e = 'B';
    int f = 'C';    // int uses 4 bytes
    int g = 'D';
    double h = 'E'; // double uses 8 bytes
    double i = 'F';

    char j;
    char k[1];
    char l[2];

    short m[3];
    int n[3];
    double o[3];

    // find size of each char
    printf("char: %d bytes\n", sizeof(a));
    printf("char: %d bytes\n", sizeof(b));
    printf("char: %d bytes\n", sizeof(c));
    printf("short: %d bytes\n", sizeof(d));
    printf("short: %d bytes\n", sizeof(e));
    printf("int: %d bytes\n", sizeof(f));
    printf("int: %d bytes\n", sizeof(g));
    printf("double: %d bytes\n", sizeof(h));
    printf("double: %d bytes\n", sizeof(i));

    printf("char: %d bytes\n", sizeof(j));
    printf("char [1]: %d bytes\n", sizeof(k));
    printf("char [2]: %d bytes\n", sizeof(l));

    printf("short [3]: %d bytes\n", sizeof(m));
    printf("int [3]: %d bytes\n", sizeof(n));
    printf("double [3]: %d bytes\n", sizeof(o));

    //display address
    printf("char address: %p\n", &a); //addresses are in hexadecimal 
    printf("char address: %p\n", &b);
    printf("char address: %p\n", &c);
    printf("short address: %p\n", &d);
    printf("short address: %p\n", &e);
    printf("int address: %p\n", &f);
    printf("int address: %p\n", &g);
    printf("double address: %p\n", &h);
    printf("double address: %p\n", &i);

    printf("char address: %p\n", &j);
    printf("char[1] address: %p\n", &k);
    printf("char[2] address: %p\n", &l);
    printf("short[3] address: %p\n", &m);
    printf("int[3] address: %p\n", &n);
    printf("double[3] address: %p\n", &o);

    return 0;
}