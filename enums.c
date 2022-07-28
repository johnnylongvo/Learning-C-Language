#include <stdio.h>

/*
    enum - a user defined type of named integer identifiers
        helps to make a program more readable
        enum are also constants
*/

// working with days of the week, 
enum Days
{
    Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7,
};
// each constants has an associated integer 0,1,2,3,4,5
// provide unique value instead instead sunday = 0, set sun = 1, mon = 2,  etc.

int main() {

    // enum Days today = Saturday;
    enum Days today = Sunday;
    // enum Days today = Monday;
    // enums are NOT STRINGS, but they can be treated as integers

    // printf("%d", today);

    // How does enum make a program more readable?
    // write an if/else to check what today is

    //if (today == 1 || today == 7 ) {
    if (today == Sunday || today == Saturday ) {    // more-readable, today == 1 may be confusing
        printf("It is the weekend, time to relax.");
    } else {
        printf("I have to study today, since it is the weekday.");
    }

    return 0;
}