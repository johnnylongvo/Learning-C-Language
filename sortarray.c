#include <stdio.h>

void sort(int[], int);
void printArray(int[], int);
// void sort(char[], int);
// void printArray(char[], int);

// bubble sort
int main() {

    int array[] = {9, 1, 8, 2, 7, 3, 6, 5, 4}; // array 
    //int array[] = {19, 17, 83, 2, 72, 31, 62, 52, 4}; // array

    //char array[] = {'F', 'A', 'D', 'B', 'C', 'E'};

    int size = sizeof(array)/sizeof(array[0]); // calculate size of array (bytes), how many times to iterate through array

    sort(array, size);
    printArray(array, size);

    return 0;
}

void sort(int array[], int size){ // change to void sort(char array[], int size){ for characters
    // use nested loops
    for (int index = 0; index < size - 1; index++) // continue for loop as i < size - 1 
    {
        for (int j = 0; j < size - index - 1; j++) { //optimize  for (int j = 0; j < size - index - 1; j++) {
            if(array[j] > array[j+1]){      //j+1 bc checking element directly next to one examining
            //if(array[j] < array[j+1]){ //array is sorted in reverse order!
                int temp = array[j];    // basic variable swap, to temp store some value 
                array[j] = array[j+1];  // move element on right over to element on left
                array[j+1] = temp; //whatever is in temp moving element on the right
            }
        }
    }
}

void printArray(int array[], int size){ //change to void printArray(char array[], int size) for char
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]); // display int[]
        //printf("%c ", array[index]); // displaying char[]
    }
}
