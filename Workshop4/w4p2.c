/*
*****************************************************************************
                          Workshop - #4 (P2)
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

int main(void)
{
    int Continue_Shopping = 1;
    int Number_of_Apples, Number_of_Pears, Number_of_Oranges, Number_of_Tomatoes, Number_of_Cabbages;

    while (Continue_Shopping)
    {
        printf("Grocery Shopping\n");
        printf("================\n");

        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &Number_of_Apples);

            if (Number_of_Apples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (Number_of_Apples < 0);

    }
    return 0;
}
