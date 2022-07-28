#include <fcntl.h>	   // O_* constants
#include <sys/stat.h>  // mkfifo()
#include <sys/types.h> // mkfifo()
#include <string.h>	   // strlen() strcmp()
#include <stdio.h>	   // printf() scanf()
#include <ctype.h>
#include <stdlib.h> // exit()
#include <time.h>	// time

// #include "my_const.h"

// global variables
char gameboard[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetGame();	   // 2D character array
void printGame();	   // print 2D character array
int checkSpace(); // if invoking function, if return 0 = gameOver
void player1Move();
void player2Move();	// random seed is implemented
char checkWin(); // check
void printWinner(char);


int main()
{

	// create the named pipe (FIFO) if not exist
	// int f1 = mkfifo(myfifo_1to2, 0666);
	// int f2 = mkfifo(myfifo_2to1, 0666);
	// printf("@p1: f1 = %d  f2 = %d\n", f1, f2);

	// char rd_data[MAX], wr_data[MAX];

	// printf("waiting for named pipes open ... \n");

	// // P1&P2: order of open() is important to unblock processes
	// // open() for WR will be blocked until the other side is open for RD
	// int fd_wr = open(myfifo_1to2, O_WRONLY);
	// // open() for RD will be blocked until the other side is open for WR
	// int	fd_rd = open(myfifo_2to1, O_RDONLY);

	// printf("named pipes opened and ready\n");

	char winner = ' '; // local variable: if winner is empty = no winner, if player wins = X or O
	char playAgain;

	do
	{
		winner = ' ';
		playAgain = ' ';
		resetGame();

		while (true || winner == ' ' && checkSpace() != 0)
		{
			printGame();

			player1Move();
			winner = checkWin();

			if (winner != ' ' || checkSpace() == 0)
			{
				break;
			}

			player2Move();
			winner = checkWin();

			if (winner != ' ' || checkSpace() == 0)
			{
				break;
			}
		}

		printGame();
		printWinner(winner);

		printf("Play Again? (Y/N): ");
		// scanf("%c");
		scanf("%c", &playAgain);
		playAgain = toupper(playAgain);
	} while (playAgain == 'Y');

	printf("Thank you for playing\n");

	// prog1: write first
	// while (true) {
	// 	printf("Enter a message (Q to quit): ");
	// 	fgets(wr_data, MAX, stdin);
	// 	wr_data[strlen(wr_data) - 1] = '\0'; // '\n' is replaced by NULL ('\0')
		// write(fd_wr, wr_data, strlen(wr_data) + 1);
	// 	if (strcmp(wr_data, "Q") == 0)
	// 		break;

	// 	read(fd_rd, rd_data, sizeof(rd_data));
	// 	printf("received: %s\n", rd_data);
	// }
	// close(fd_wr);
	// close(fd_rd);
	// unlink(myfifo_1to2);
	// unlink(myfifo_2to1);
	// printf("Prog1 exits\n");

	return 0;
}

void resetGame()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gameboard[i][j] = ' '; // set to emptySpace, each element in 2D array will be empty space clearing
		}
	}
}

void printGame()
{
	printf("let's play TICTACTOE~~~\n");
	printf("+-+-+-+\n");
	printf("|%c|%c|%c|\n", gameboard[0][0], gameboard[0][1], gameboard[0][2]);
	printf("+-+-+-+\n");
	printf("|%c|%c|%c|\n", gameboard[1][0], gameboard[1][1], gameboard[1][2]);
	printf("+-+-+-+\n");
	printf("|%c|%c|%c|\n", gameboard[2][0], gameboard[2][1], gameboard[2][2]);
	printf("+-+-+-+\n");
}

int checkSpace()
{
	int spaces = 9;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (gameboard[i][j] != ' ')
			{
				spaces--; // decrement by 1, if spot is occupied
			}
		}
	}
	return spaces; // if return 0 = gameover
}

void player1Move()
{
	int x;
	int y;

	do
	{
		printf("Input Row [1-3]: ");
		scanf("%d", &x); // user enter in 1-3, with arrays begin with 0
		x--;			 // decrement x by 1, providing row 0-2
		printf("Input Column [1-3]: ");
		scanf("%d", &y);
		y--; // decrement y by 1, providing row

		// check to see cordinates that user gave are occupied
		if (gameboard[x][y] != ' ')
		{
			printf("Spot has been occupied\n");
		}
		else
		{
			gameboard[x][y] = PLAYER1;
			break;
		}
	} while (gameboard[x][y] != ' ');
}

void player2Move()
{
	// creates a seed based on current time
	srand(time(0));
	int x;
	int y;

	if (checkSpace() > 0)
	{
		do
		{
			x = rand() % 3;
			y = rand() % 3;
		} while (gameboard[x][y] != ' ');

		gameboard[x][y] = PLAYER2;
	}
	else
	{
		printWinner(' '); // means no winner = draw
	}


	// int x;
	// int y;

	// do
	// {
	// 	printf("Enter Row [1-3]: ");
	// 	scanf("%d", &x); // user enter in 1-3, with arrays begin with 0
	// 	x--;			 // decrement x by 1, providing row 0-2
	// 	printf("Enter Column [1-3]: ");
	// 	scanf("%d", &y);
	// 	y--; // decrement y by 1, providing row

	// 	// check to see cordinates that user gave are occupied
	// 	if (gameboard[x][y] != ' ')
	// 	{
	// 		printf("Spot has been taken");
	// 	}
	// 	else
	// 	{
	// 		gameboard[x][y] = PLAYER2;
	// 		break;
	// 	}
	// } while (gameboard[x][y] != ' ');
}

char checkWin()
{
	// check each row
	for (int i = 0; i < 3; i++)
	{
		if (gameboard[i][0] == gameboard[i][1] && gameboard[i][0] == gameboard[i][2])
		{ // top-left
			return gameboard[i][0];
		}
	}
	// check each column
	for (int i = 0; i < 3; i++)
	{
		if (gameboard[0][i] == gameboard[1][i] && gameboard[0][i] == gameboard[2][i])
		{ 
			return gameboard[0][i];
		}
	}
	// check diagonal
	if (gameboard[0][0] == gameboard[1][1] && gameboard[0][0] == gameboard[2][2])
	{ // [1,1] = middle
		return gameboard[0][0];
	}
	if (gameboard[0][2] == gameboard[1][1] && gameboard[0][2] == gameboard[2][0])
	{ // [0,2] = bottom-left [2,0] = top-right
		return gameboard[0][2];
	}
	return ' '; // currently is no winner
}

void printWinner(char winner)
{
	if (winner == PLAYER1)
	{
		printf("PLAYER1 WIN");
	}
	else if (winner == PLAYER2)
	{
		printf("PLAYER2 WIN");
	}
	else
	{
		printf("DRAW");
	}
}