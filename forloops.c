#include <stdio.h>


// for loop - repeats a section of code a limited amount of times
int main() {

    //for (int i = 1; i <= 10; i++)    // counter or index (index = i), condiiton (how long to repeat code), increment or decrement counter
    //for (int i = 1; i <= 10; i+=2)  //count by 2
    //for (int i = 1; i <= 10; i+=3)   //count by 3
    //for (int i = 10; i >= 1; i--)     // count from 10 to 1 
    //for (int i = 10; i >= 1; i-=2)     // count from 10 to 1 by 2
    for (int i = 1; i <= 15; i++)
    {
        // printf("test\n");
        printf("%d\n", i);
    }

        return 0;
}

// declare an index, counter
// some condition to check after each interation 
// some way to increment or decrement index 