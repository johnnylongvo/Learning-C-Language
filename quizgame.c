#include <stdio.h>
#include <ctype.h>

// Quiz Game 
int main() {

    char questions[][100] = 
    {"1. Which Pokemon has the ability to use lightning attacks?: ",
     "2. What do Pokemons eat?: ",
     "3. Who is the main character that trains Pikachu?: "
        }; // 2D array of characters; store questions 100 bytes

    char options[][100] = 
    {"A. Pikachu", "B. Charmander", "C. Jigglypuff", "D. Snorlax",
     "A. Fruits", "B. Vegetables", "C. Meat", "D. All of the above",
     "A. Nurse Joy", "B. Misty", "C. Ash", "D. Team Rocket",}; // seperate 2D character array

    char answers[3] = {'A', 'D', 'C'}; // answer key; 1D array

    int num_Questions = sizeof(questions)/sizeof(questions[0]); // calculate number of questions we have

    char playerGuess;
    int playerScore = 0;

    printf("-=+=- QUIZ GAME -=+=-\n");

    // loop through all questions
    for (int index = 0; index < num_Questions; index++)
    {
        printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");
        printf("%s\n", questions[index]);
        printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");

        // display possible options; need nested forloop
        /*

        begin forloop at every 4th string, 
        during 1st iteration i = 0, 0*4= 0, next iteration i = 1, 1*4= 4, etc.
        begin inner forloop with every 4th string within 2D array of options

        CONDITION (j<index*4+4): display 4 strings, forloop will cycle 4x beginning at every 4th string
        */
        for (int j = (index * 4); j < (index * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        //accept user input after nested forloop
        printf("Input Guess: ");
        scanf("\n%c", &playerGuess); // skipped question 2,  \n new line in buffer
        //scanf("%c"); //clear new line character from input buffer to not skip question2.

        playerGuess = toupper(playerGuess); // making guess uppercase

    // write if/else to check guess if it is equal to answer
        if(playerGuess == answers[index]) {
            printf("Correct Answer!\n");
            playerScore++;
        }
        else
        {
             printf("Wrong Answer!\n");
        }
    }

    printf("=+=+=+=+=+=+\n");
    printf("SCORE: %d/%d\n", playerScore, num_Questions); // display score, display 2 values (playerScore/numQuestions), 2 int to work with
    printf("=+=+=+=+=+=+\n");

    return 0;
}