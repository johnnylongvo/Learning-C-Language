#include <stdio.h>

int main() {

    printf("Hello World!\n");
    printf("My name is Johnny!\n");

    // auto code runner to run
    // terminal: g++ -g helloworld.c & ./a.out
    // terminal: gcc helloworld.c & ./a.out or a.exe

    // this is a comment

    /*
    this is a multiline comment
    */

   /*
    escape sequence = char combination consist of a backslash
                      followed by a letter or combo of digits.
                      specify actions within a line or string of text
                      \n = new line
                      \t = tab
   */

    printf("I\nenjoy\ncomputer\nscience\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    printf("\"do you believe in love after love\" - cher\n");
    printf("\'do you believe in love after love\' - cher\n");
    printf("\\do you believe in love after love\\ - cher\n");

    return 0;
}