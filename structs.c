#include <stdio.h>
#include <string.h>

/*
struct - collection of related members ("variables")
        they can be of different data types
        listed under one name in a block of memory
        VERY SIMILAR to classes in other languages (but no methods)
*/

struct Player {     // data-type
    char name[12];  // character name size of 12
    int score;      // integer named score
};  

//Program for game, 2 players each player will have a name and a score
int main()
{

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Johnny");       // . member access operator
    player1.score = 6;

    strcpy(player2.name, "BJ");
    player2.score = 9;

    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Name: %s\n", player2.name);
    printf("Score: %d\n", player2.score);

    return 0;
}