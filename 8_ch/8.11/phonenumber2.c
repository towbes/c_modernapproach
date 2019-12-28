/** C Programming: A Modern Approach #8.11
 * Write a program that translates an alphabetic number into numeric form.
 * Assume all letters are upper case
 * If original number includes nonalphabetic characters, leave them unchanged.
 * Store numbers in an array, assume numbers will not be more than 15 length
 */

#include <stdio.h>

int main (void) {

    char ch;
    char num[15];
    int i = 0;

    printf("Please enter a phone number: ");
    //Use getchar() loop to get a phone number from user
    while ((ch = getchar()) != '\n' && i < 15) {
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            num[i] = '2';
            i++;
        }
        else if (ch == 'D' || ch == 'E' || ch == 'F') {
            num[i] = '3';
            i++;
        }
        else if (ch == 'G' || ch == 'H' || ch == 'I') {
            num[i] = '4';
            i++;
        }
        else if (ch == 'J' || ch == 'K' || ch == 'L') {
            num[i] = '5';
            i++;
        }
        else if (ch == 'M' || ch == 'N' || ch == 'O') {
            num[i] = '6';
            i++;
        }
        else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
            num[i] = '7';
            i++;
        }
        else if (ch == 'T' || ch == 'U' || ch == 'V') {
            num[i] = '8';
            i++;
        }
        else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            num[i] = '9';
            i++;
        }
        else {
            num[i] = ch;
            i++;
        }
    }

    printf("In numeric form: ");

    for(i = 0; i < 15; i++) {
        printf("%c", num[i]);
    }

    printf("\n");

    return 0;
}
