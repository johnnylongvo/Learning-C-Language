#include <stdio.h>
#include <string.h>

/*

while loop - repeats a section of code possibly unlimited times.
WHILE some condition remains true
a while loop might not execute at all
 
*/

//Program to ask user for name, if skip then keep asking for name
int main() {

    char name[25];

    printf("What is your name? ");
        //scanf("")
    fgets(name, 25, stdin); // names that contains spaces, (variable name, set size user input, standardinput)
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) //condition to check to see if we have an empty string
    {
        printf("You did not enter your name\n");
        printf("What is your name? ");
        fgets(name, 25, stdin); // names that contains spaces, (variable name, set size user input, standardinput)
        name[strlen(name) - 1] = '\0';
    }

    printf("Welcome %s\n", name);

    return 0;
}

