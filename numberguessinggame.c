#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

// generate 2 constants
const int MINIMUM_NUM = 1;
const int MAXIMUM_NUM = 20;

int userGuess;  // guess
int userInput = 0; // user's guesses
int answer;

srand(time(0)); // uses current time as a seed for random #

answer = rand() % MAXIMUM_NUM + MINIMUM_NUM; // generate a random number between min & max

// printf("%d", answer);

do  // create a do while loop, take at least 1 guess in order for user to guess answer
{
    printf("Enter in your guess #: ");  // ask user's input to guess number
    scanf("%d", &userGuess);

    if(userGuess > answer) {    // check to see if guess is greater than answer
        printf("Your guess # is too high.\n");
    }
    else if 
        (userGuess < answer) // check to see if guess is less than answer
        {
            printf("Your guess # is too low.\n");
        } else {
        printf("Your guess is CORRECT!\n"); // user guess is correct
    }
    // increases guesses by 1; very possible score a user can get is 1 if they guess on first try
    userInput++;

} while (userGuess != answer);  // guess does not equal answer

printf("-=+=+=+=+=+=+=+=+=-\n");
printf("Answer: #%d\n", answer);
printf("Guesses: #%d\n", userInput);
printf("-=+=+=+=+=+=+=+=+=-\n");

return 0;
}