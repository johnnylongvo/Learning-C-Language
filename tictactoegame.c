#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//global variables
char board[3][3]; //2D of characters
const char PLAYER = 'X';
const char COMPUTER = 'O';

// 7 different functions prototypes
void resetBoard(); //2D character array
void printBoard(); //prints 2D character array

int checkFreeSpaces(); // check free spaces: if after invoking function & return 0 = gameover
void playerMove(); // when player's turn to move
void computerMove(); // when AI turn to move
char checkWinner(); // win conditions to check
void printWinner(char); // 1 parameter char

int main() {

    char winner = ' '; //set to empty space = no winner, if player wins = X if comp wins = O
    char playAgain;

    do
    {
        winner = ' '; //set to empty space
        playAgain = ' ';

        resetBoard(); // initialize different characters within our 2D board
        // printBoard();

        while (winner == ' ' && checkFreeSpaces() != 0) // if winner = empty space, currently no winner, after invoked checkFreeSpace value return does not = 0
        {
            printBoard();

            playerMove();
            winner = checkWinner();

            // check to see if game is over
            if (winner != ' ' || checkFreeSpaces() == 0)
            { // if winner != emptyspace then there is a winner: invoking checkFreespaces value return 0 then break while loop
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            { // if winner != emptyspace then there is a winner: invoking checkFreespaces value return 0 then break while loop
                break;
            }
    }

    printBoard();
    printWinner(winner);

    printf("Would you like to play again? [Y/N]: ");
    scanf("%c"); // clear buffer
    scanf("%c", &playAgain);

    playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    printf("Thank you for playing.\n");

    // resetBoard(); //initialize different characters within our 2D board
    // // printBoard();

    // while (winner == ' ' && checkFreeSpaces() != 0) //if winner = empty space, currently no winner, after invoked checkFreeSpace value return does not = 0
    // {
    //        printBoard();

    //        playerMove();
    //        winner = checkWinner();

    // // check to see if game is over
    //        if(winner != ' ' || checkFreeSpaces() == 0) { // if winner != emptyspace then there is a winner: invoking checkFreespaces value return 0 then break while loop
    //            break;
    //        }

    //     computerMove();
    //     winner = checkWinner();
    //     if(winner != ' ' || checkFreeSpaces() == 0) { // if winner != emptyspace then there is a winner: invoking checkFreespaces value return 0 then break while loop
    //            break;
    //        }
    // }

    // printBoard();
    // printWinner(winner);

    return 0;
}

void resetBoard(){
    for (int index = 0; index < 3; index++)   // rows, 3 times for 1 for each row we have
    {
        for (int j = 0; j < 3; j++) // columns
        {
            board[index][j] = ' '; // each index within 2D array, set to emptyspace: when call resetBoard will be an empty space clearing it
        }
    }
}
void printBoard(){
    /* 
    Gameboard indexes
    [0,0] [0,1] [0,2]
    [1,0] [1,1] [1,2]
    [2,0] [2,1] [2,2]
    */
    printf("+-+-+-+\n");
    printf("|%c|%c|%c|\n", board[0][0], board[0][1], board[0][2]);
    printf("+-+-+-+\n");
    printf("|%c|%c|%c|\n", board[1][0], board[1][1], board[1][2]);
    printf("+-+-+-+\n");
    printf("|%c|%c|%c|\n", board[2][0], board[2][1], board[2][2]);
    printf("+-+-+-+\n");
}

int checkFreeSpaces(){
    int freeSpaces = 9;

    for (int index = 0; index < 3; index++) // 
    {
        for(int j = 0; j < 3; j++) {
            if(board[index][j] != ' ') {  //check to see if 2D array char board[i][j] != emptyspace
                freeSpaces--;   // if whatever spot we are on is occupied, take freespaces local variable & decrement by 1
            }
        }
    }
    return freeSpaces; // if return 0 then gameover, no more places for player to move
}

void playerMove(){
    // declare 2 local variables
    int x;
    int y;

    do
    {
        printf("Enter in Row # [1->3]: "); // user will enter in numbers 1-3 but with array beginning at 0
        scanf("%d", &x);
        x--; // decrement x by 1, gives 0->2 technically
        printf("Enter in Columns # [1->3]: ");
        scanf("%d", &y);
        y--; // decrement y by 1, gives 0->2 technically

        if (board[x][y] != ' ')
        {
            printf("Spot is occupied! Invalid move.\n");
    }
    else
    {
        board[x][y] = PLAYER;
        break; // break out of while loop
    }
    }
    while (board[x][y] != ' ');
     // if board at index x&y != emptyspace,if spot player move is occupied then ask them again to enter in coordinates

    // printf("Enter in Row # [1->3]: ")   // user will enter in numbers 1-3 but with array beginning at 0
    // scanf("%d", &x);
    // x--; // decrement x by 1, gives 0->2 technically
    // printf("Enter in Columns # [1->3]: ")   
    // scanf("%d", &y);
    // y--; // decrement y by 1, gives 0->2 technically

    // if(board[x][y] != ' ') {
    //     printf("Spot is occupied! Invalid move.\n")
    // } else {
    //     board[x][y] = PLAYER;
    
}

void computerMove(){

    // generates a seed based on current time
    srand(time(0));
    int x;  // generate 2 random # between 0 and 2
    int y;

    // check to see if free spaces are available
    if(checkFreeSpaces() > 0) {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
            //keep generating random numbers until there is an open space
        } while (board[x][y] != ' ');   //check to see if spot generated is even open

        // if find open space 
        board[x][y] = COMPUTER;
    } else {    // if there are no free spaces available
        printWinner(' ');   // invoked printwinner, meaning there is no winner, is a draw
    }
}

char checkWinner(){

    /* 
    Gameboard indexes
    [0,0] [0,1] [0,2]
    [1,0] [1,1] [1,2]
    [2,0] [2,1] [2,2]
    */

    // check Rows
    for (int index = 0; index < 3; index++)
    {
        if(board[index][0] == board[index][1] && board[index][0] == board[index][2]) {   //check top-left, top-mid, top-right
            return board[index][0]; //return whatever is first on board
        }
    }
    // check Columns
    for (int index = 0; index < 3; index++)
    {
        if(board[0][index] == board[1][index] && board[0][index] == board[2][index]) {   //check top-left, top-mid, top-right columns
            return board[0][index];
        }
    }
    // check Diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) {  //first diagonal
        return board[0][0]; 
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]) {   //check bot-left, mid-mid, top-right corner
        return board[0][2];
    }

    // if after checking all win conditions and is no winner, then return empty character = no winner
    return ' ';
}

void printWinner(char winner){ //paramater for printWinner, parameter is char winner
    if (winner == PLAYER) {
        printf("Congraulations, You have won!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("Computer has won, Sorry!\n");
    }
    else
    {
        printf("Draw!\n");
    }
} 
