#include <stdio.h>

/*

    2D array - an array, where each element is an entire array
                useful if you need a matrix, grid, or table of data
*/

int main() {
/*
    int numbers[3][3] = {
        {1,2,3},   // 
        {4,5,6}
    }; // now a 2D array

    // [2] maximum # of rows 
    // [3] maximum # of elements within each row: columns

    // set a maximum size of elements within each array = 3 elements a piece
    // set a maximum amount of arrays in 2D array = 2 for 2 separate arrays within 2D array
*/
int numbers[3][3];

int rows = sizeof(numbers)/sizeof(numbers[0]);
int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

printf("# of Rows: %d\n", rows);
printf("# of Columns: %d\n", columns);

numbers[0][0] = 1;
numbers[0][1] = 2; 
numbers[0][2] = 3; 
numbers[1][0] = 4; 
numbers[1][1] = 5; 
numbers[1][2] = 6; 
numbers[2][0] = 7; 
numbers[2][1] = 8;
numbers[2][2] = 9;

// display elements of 2D array? use nested loop!
//for (int index = 0; index < 3; index++) // # of rows we have
for (int index = 0; index < rows; index++) // # of rows we have
{
    //for (int j = 0; j < 3; j++) // # of columns
    for (int j = 0; j < columns; j++) // # of columns
    {
        printf("%d ", numbers[index][j]);
    }
    printf("\n"); // new line after each row
}

return 0;
}