#include <stdio.h>

int main() {
    char fname[20], lname[20];

    printf("Enter your FIRST name: ");
    scanf("%s", fname);

    printf("Enter your LAST name: ");
    scanf("%s", lname);

    printf("Your FULL name is %s %s\n", fname, lname);

    return 0;
}