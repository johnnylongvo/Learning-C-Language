#include <stdio.h>

// nested loop - a loop inside of another loop
int main() {

    int rows;
    int columns;
    char symbol;

    printf("Enter # of Rows: ");
    scanf("%d", &rows);

    printf("Enter # of Columns: ");
    scanf("%d", &columns);

    // clear buffer to read character
    scanf("%c"); // getting rid of new line character, still within buffer

    // let use type in symbol, creating rectangle
    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);   // %c for characters

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            //printf("%d", j);
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}