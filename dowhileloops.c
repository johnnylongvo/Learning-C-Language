#include <stdio.h>

/*
while loop - checks a condition, THEN executes a block of code if condition is true 
do while loop - always executes a block of code once, THEN checks a condition 
*/

//Program user type in as many numbers and then finding the sum
int main() {

    int number = 0;
    int sum = 0;

    // while (number > 0)
    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);

        if (number > 0)
        {
            sum = sum + number; 
            // sum += number    // this is also another way
        }
    } while (number > 0); // copy and paste here

    printf("Sum: %d\n", sum);

    return 0;
}