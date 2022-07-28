#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Toyota", "Mercedes", "Nissan"};

    //cars[0] = "Tesla";
    strcpy(cars[0], "Tesla"); //if want to overwritten index 0 array 

    // display array of strings
    for (int index = 0; index < sizeof(cars)/sizeof(cars[0]); index++)
    {
        printf("%s\n", cars[index]);
    }

    return 0;
}