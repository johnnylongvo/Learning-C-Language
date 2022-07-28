#include <stdio.h>

int main() {
/*

switch = a more efficient alternative to using many "else if" statements 
        allowing a value to be tested for equality against many cases

*/

char grade;

printf("Enter a letter grade: ");
scanf("%c", &grade);


switch(grade) {
    case 'A':
    printf("Perfect Score!\n");
    break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You tried your best!\n");
        break;
    case 'D':
    printf("I mean, you still passed!\n");
    break;
    case 'F':
    printf("You failed!\n");
    break;
    default: 
    printf("Invalid Letter Grade! Please Enter in valif grades.\n");

    }

// if(grade == 'A') {
//     printf("Perfect!\n");
// }
// else if(grade == 'B') {
//     printf("You did good!\n");
// }
// else if(grade == 'C') {
//     printf("You tried your best!\n");
// }
// else if(grade == 'D') {
//     printf("I mean, you still passed!\n");
// }
// else if(grade == 'F') {
//     printf("You failed! RIP!\n");
// }
// else {
//     printf("Invalid grade!\n");
// }

}