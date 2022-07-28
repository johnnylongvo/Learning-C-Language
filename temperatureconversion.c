#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("Is the temprature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);// make unit upper-case: in case user puts lower case as input
    // or in if/else match condition to lowercase too 

    if(unit == 'C') {
        //printf("The temperature is currently in C\n");
        printf("Enter the temp in Celsius: \n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Farenheit is: %.1f\n", temp);
    }
    else if (unit == 'F')
    {
        //printf("The temperature is currently in F\n");
        printf("Enter the temp in Farenheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.1f\n", temp);
    }
    else
    {
        printf("%c is not a valid unit of measurement!\n", unit);
    }

    return 0;
}