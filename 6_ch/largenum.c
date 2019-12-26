/**
 * Write a program that finds the largest in a series of numbers entered by the user
 * When user enters 0 or negative number, program should display largest nonnegative number
 * Dec 26, 2019
 * Author: towbes
 * 
**/

#include <stdio.h>

int main (void) {

    //Declare variables to store current and highest integer values
    float currentnum, highnum;
    //Start highint at 0 since no input yet
    highnum = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &currentnum);
        if (currentnum > highnum) {
            highnum = currentnum;
        }
    }  while (currentnum > 0); 

    printf("The largest number entered was %.2f\n", highnum);

    return 0;
}

