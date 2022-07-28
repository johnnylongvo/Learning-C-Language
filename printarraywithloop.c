#include <stdio.h>


// loop through and print elements of an array 
int main() {

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // printf("%lf", prices[0]);
    // printf("%lf", prices[1]);
    // printf("%lf", prices[2]);
    // printf("%lf", prices[3]);   // not practical

    //printf("%d bytes\n", sizeof(prices));      // output: 48 bytes =  6elementsx8bytes(double)

    
    // for (int i = 0; i < 5; i++)
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]); // use index instead of #
    }

    return 0;
}