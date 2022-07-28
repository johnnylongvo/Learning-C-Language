#include <stdio.h>
#include <stdbool.h> // bool library

int main() {

     /*
    variable = allocated space in memory to store a value,
               we refer to a variable's name to access the stored value.
               that variable now behaves as if it was the value it contains.
               BUT we need to decalre what type of data we are storing
    */

    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration and initialiation

    int age = 22; //integer     
    float gpa = 3.21; //floating point number       
    
    
    char grade = 'C'; //single character       
    char name[] = "Johnny"; //array of char     

    printf("Welcome %s\n", name);
    printf("This is your age: %d years old\n", age);
    printf("Your average grade is a: %c\n", grade);
    printf("Your GPA is: %f\n", gpa);


    /*
    continuation of Variables
    */

    char a = 'A'; //single character            %c to display char
    char b[] = "Banana"; // array of characters   %s

    float c = 3.141592653589793;               // 4 bytes (32-bit of precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64-bits of precision) 15-16 digits %lf

    bool e = true; //1 byte (true (1) or false (0)) %d

    // char f = 100; // output: c
    char f = 120;          // 1 byte (-128 to +127) %d or %c (ASCII char)
    unsigned char g = 255; //1 byte (0 to +255) %d or %c: reset back to 0 if extended range

    short int h = 32767;          // 2 byte (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 byte (0 to +65,535) %d

    int j = 2147483647; // integers: 2 bytes (-32,768 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 2 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; //8 bytes (0 to +18 quintilltion) %llu

    printf("float: %f\n", c); //float
    printf("double: %0.15lf\n", d); //double
    printf("bool: %d\n", e); //bool

    printf("char as ASCII value: %c\n", f); //char as numeric value
    printf("char as numeric value: %d\n", f); //char as numeric value
    
    printf("unsigned char as numeric value: %d\n", g); //unsigned char as numeric value
    printf("short int: %d\n", h); //short int 
    printf("unsigned short int : %d\n", i); //unsigned short int 
    printf("int: %d\n", j); //int 
    printf("unsigned int: %u\n", k); //unsigned int 
    printf("long long int: %lld\n", l); //long long int: measure speed of light
    printf("unsigned long long int: %llu\n", m); //unsigned long long int

    return 0;
}