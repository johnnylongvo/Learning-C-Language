#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // bytes
    int age;

    printf("What is your name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin); //read any whitespaces, name, char[], stdinput: include new line char \n
    name[strlen(name) - 1] = '\0'; //strlen = length: gets rid of new line character

    printf("How old are you: ");
    scanf("%d", &age);

    printf("Hello %s, Welcome to my channel\n", name);
    printf("Your are %d years old\n", age);
    

    return 0;
}