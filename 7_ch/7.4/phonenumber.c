/** C Programming: A Modern Approach #7.4
 * Write a program that translates an alphabetic number into numeric form.
 * Assume all letters are upper case
 * If original number includes nonalphabetic characters, leave them unchanged.
 */

#include <stdio.h>

int main (void) {

    char ch;

    printf("Please enter a phone number: ");
    //Use getchar() loop to get a phone number from user
    while ((ch = getchar()) != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            printf("%d",2);
        }
        else if (ch == 'D' || ch == 'E' || ch == 'F') {
            printf("%d",3);
        }
        else if (ch == 'G' || ch == 'H' || ch == 'I') {
            printf("%d",4);
        }
        else if (ch == 'J' || ch == 'K' || ch == 'L') {
            printf("%d",5);
        }
        else if (ch == 'M' || ch == 'N' || ch == 'O') {
            printf("%d",6);
        }
        else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
            printf("%d",7);
        }
        else if (ch == 'T' || ch == 'U' || ch == 'V') {
            printf("%d",8);
        }
        else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            printf("%d",9);
        }
        else {
            printf("%c",ch);
        }
    }

    printf("\n");

    return 0;
}
