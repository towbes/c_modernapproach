/** C Programming: A Modern Approach # 7.6
 * Write a program that prints the values of types using sizeof
 */

#include <stdio.h>

int main (void) {

    printf("Printing sizes of various types...\n");

    printf("The size of int: %lu\n", (unsigned long) sizeof(int));
    printf("The size of short: %lu\n", (unsigned long) sizeof(short));
    printf("The size of long: %lu\n", (unsigned long) sizeof(long));
    printf("The size of double: %lu\n", (unsigned long) sizeof(double));
    printf("The size of long double: %lu\n", (unsigned long) sizeof(long double));

    return 0;
}
