#include <stdio.h>


//Reading files from desktop
int main() {

    // FILE *pF = fopen("C:\\Users\\JVO\\Desktop\\poem.txt", "r"); // r-read
    FILE *pF = fopen("poem.txt", "r"); 

    //we need buffer -  acts as a container: 
    //array of characters to hold one line of text doc one line at a time

    char buffer[255]; //set size to 255, holding 1 line of file, 1 line at a time
    // fgets(buffer, 255, pF); // to read a single line
    // printf("%s", buffer);

    //check to see if file exists: before attempty to open and read
    if(pF == NULL) {
        printf("File does not exist! ");
    } else {
            while (fgets(buffer, 255, pF) != NULL) // if we reach end of file, fgets return NULL
    {
        printf("%s", buffer); // print within buffer
        }
    }

    //need to read all contents: do-while loop
    // while (fgets(buffer, 255, pF) != NULL) // if we reach end of file, fgets return NULL
    // {
    //     printf("%s", buffer); // print within buffer
    // }
    

    fclose(pF); //close file
    return 0;
}