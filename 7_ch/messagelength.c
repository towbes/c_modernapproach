/** This program calculates the length of a message
 * C Programming: A Modern Approach Ch7
*/

#include <stdio.h>

int main(void) {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
