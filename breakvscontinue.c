#include <stdio.h>

/*
    continue - skips rest of code & forces the next ieration of the loop
    break - exits a loop/switch
*/

int main() {


    // counting 1 - 20 but skipping 13
    for (int index = 1; index <= 20; index++)
    {
        if(index == 13) {
            //continue; //skips rest of code 
            break; // exits out of loop
        }
        printf("%d\n", index);
    }

    return 0;
}