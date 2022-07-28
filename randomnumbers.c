#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


/*

    pseudo random number -  a set of values or elements that are statistically random
            (do not use these for any sort of cryptographic security)
*/

int main() {

    // use current time to generate a seed for random (srand)
    srand(time(0));

 // random 0 - 32,767 
    int number1 = (rand() % 6) + 1;     // given a random number 0 -> 6
    // max number: 6, but computer can only generate 0 -> 5
    // to add in offset, + 1 to the end to make it 0 -> 6
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    // needing a larger number 
    int number4 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    printf("%d\n", number4);

    return 0;
}