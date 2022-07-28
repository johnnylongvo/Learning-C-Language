#include <stdio.h>
#include <string.h>

// typedef - reserved keywords that gives an existing datatype a "nickname"

// typedef char player[25];

//often see typedef in struct
// typedef struct Player {
//     char name[25];
//     char password[12];
//     int id;
// }

typedef struct {
    char name[25];
    char password[12];
    int id;
} Player;

int main()
{

    // char player1[25] = "Johnny";
    // player player1 = "Johnny";

    // struct Player player1 = {"Johnny", "Password123", 123456789}
    // struct Player player2 = {"Ben", "password321", 987654321}

    Player player1 = {"Johnny", "Password123", 123456789};
    Player player2 = {"Ben", "password321", 987654321};

    printf("%s\n", player1.name);
        printf("%s\n", player1.password);
            printf("%d\n", player1.id);
    printf("\n");
    printf("%s\n", player2.name);
        printf("%s\n", player2.password);
            printf("%d\n", player2.id);

    return 0;
}
