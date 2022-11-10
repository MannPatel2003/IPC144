/*
*****************************************************************************
                          Workshop - #6 (P1)
Full Name  : Mann Manishkumar Patel
Student ID#: 164282212
Email      : mpatel462@myseneca.ca
Section    : NLL

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#define Max_Items 10
#include <stdio.h>

int main(void)

{


    const double Min_Value = 500, Max_Value = 400000;
    double Monthly_Income, COST[Max_Items], COSTS = 0;
    int Wishlist_item, PRIORITY[Max_Items], i;
    char FINANCE_OPTN[Max_Items];
    const int Min_Cost = 100;



    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    do
    {

        printf("Enter your monthly NET income: $");
        scanf("%lf", &Monthly_Income);

        if (Monthly_Income < Min_Value)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }

        else if (Monthly_Income > Max_Value)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }

    } while (!(Monthly_Income >= Min_Value && Monthly_Income <= Max_Value));

    do
    {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &Wishlist_item);

        if (Wishlist_item < 1)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        else if (Wishlist_item > Max_Items)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }
    } while (!(Wishlist_item > 0 && Wishlist_item < Max_Items));



    for (i = 0; i < Wishlist_item; i++)

    {
        printf("\nItem-%d Details:\n", (i + 1));

        do
        {
            printf("   Item cost: $");
            scanf("%lf", &COST[i]);

            if (COST[i] < Min_Cost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }

            else
            {
                COSTS = COSTS + COST[i];
            }

        } while (COST[i] < Min_Cost);

        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &PRIORITY[i]);

            if (PRIORITY[i] < 1 || PRIORITY[i] > 3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }

        } while (!(PRIORITY[i] >= 1 && PRIORITY[i] <= 3));

        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf("%s", &FINANCE_OPTN[i]);

            if (FINANCE_OPTN[i] != 'y' && FINANCE_OPTN[i] != 'n')
            {
                printf("      ERROR: Must be a lowercase \'y\' or \'n\'\n");
            }

        } while (FINANCE_OPTN[i] != 'y' && FINANCE_OPTN[i] != 'n');

    }
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (i = 0; i < Wishlist_item; i++)
    {
        printf("%3d  %5d  %7c    %11.2lf\n", (i + 1), PRIORITY[i], FINANCE_OPTN[i], COST[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", COSTS);
    printf("Best of luck in all your future endeavours!\n");

    return 0;
}
