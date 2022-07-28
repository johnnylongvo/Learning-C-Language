#include <stdio.h>

//Write to a file
int main() {

// pointer to a file
FILE *pF = fopen("test.txt", "w"); // w-write,  a-append,  r-read
// FILE *pF = fopen("test.txt", "a") //append
// FILE *pF = fopen("C:\\Users\\JVO\\Desktop\\test.txt", "w");

fprintf(pF, "\nI am learning how to code right now");

fclose(pF); //close file that are open

//delete a file
    // if(remove("test.txt") == 0) {
    //     printf("Text file has been deleted successfully");
    // } else {
    //      printf("Invalid file to be deleted!");
    // }

return 0;
}