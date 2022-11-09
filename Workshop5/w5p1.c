/*
*****************************************************************************
                          Workshop - #5 (P1)
Full Name  : Mann Manishkumar Patel
Student ID#: 164282212
Email      : mpatel462
Section    : NLL

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022


int main(void)
{
    const int Jan = 1, Dec = 12;
    int YEAR, MONTH;

    printf("General Well-being Log\n");
    printf("======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &YEAR, &MONTH);

        if (!(YEAR >= MIN_YEAR && YEAR <= MAX_YEAR))
        {
            printf("    ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        if (!(MONTH >= 1 && MONTH <= 12))
        {
            printf("    ERROR: Jan.(1) - Dec.(12)\n");
        }
    } while ((YEAR <= MIN_YEAR || YEAR >= MAX_YEAR) && (MONTH <= Jan || MONTH >= Dec));

    printf("\n*** Log date set! ***");
    printf("\n\nLog starting date: ");
   
    if (MONTH == 1)
    {
        printf("%d-JAN-01", YEAR);
    }

   else if (MONTH == 2)
    {
    printf("%d-FEB-01", YEAR);
    }

   else if (MONTH == 3)
    {
    printf("%d-MAR-01", YEAR);
    }

   else if (MONTH == 4)
    {
    printf("%d-APR-01", YEAR);
    }

   else if (MONTH == 5)
    {
    printf("%d-MAY-01", YEAR);
    }

   else if (MONTH == 6)
    {
    printf("%d-JUN-01", YEAR);
    }

   else if (MONTH == 7)
    {
    printf("%d-JUL-01", YEAR);
    }

   else if (MONTH == 8)
    {
    printf("%d-AUG-01", YEAR);
    }

   else if (MONTH == 9)
    {
    printf("%d-SEP-01", YEAR);
    }

   else if (MONTH == 10)
    {
    printf("%d-OCT-01", YEAR);
    }

   else if (MONTH == 11)
    {
    printf("%d-NOV-01", YEAR);
    }

   else if (MONTH == 12)
    {
    printf("%d-DEC-01", YEAR);
    }



    return 0;
}