/* Receives date from user as DD/MM/YYYY, prints as YYYYDDMM
*/
#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Please enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%d%d\n", year, month, day);

    return 0;
}
