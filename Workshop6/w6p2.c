/*
*****************************************************************************
                          Workshop - #6 (P2)
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
    double Monthly_Income, COST[Max_Items], TOTAL = 0;
    int Wish_item, PRIORITY[Max_Items], i;
    char FINANCE_OPTN[Max_Items];
    const int Min_Cost = 100;
    double  Months_remaining, months, Priority_cost = 0;
    int  select, year, Priority_Filter, n = 0;


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
        scanf("%d", &Wish_item);

        if (Wish_item < 1)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        else if (Wish_item > Max_Items)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }
    } while (!(Wish_item > 0 && Wish_item < Max_Items));



    for (i = 0; i < Wish_item; i++)

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
                TOTAL = TOTAL + COST[i];
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

    for (i = 0; i < Wish_item; i++)
    {
        printf("%3d  %5d  %7c    %11.2lf\n", (i + 1), PRIORITY[i], FINANCE_OPTN[i], COST[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", TOTAL);

    do
    {
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf(" %d", &select);

        if (select == 1)
        {
            printf("\n====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", TOTAL);

            months = (TOTAL / Monthly_Income) + 0.5;
            year = (int)months / 12;
            Months_remaining = (months - (year * 12)) + 0.5;

            printf("Forecast: %d years, %d months\n", year, (int)Months_remaining);
            n = 0;

            for (i = 0; i < Wish_item; i++)
            {
                if (FINANCE_OPTN[i] == 'y')
                {
                    n++;
                }
            }
            if (n != 0)
            {
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n\n");
            
        }
        else if (select == 2)
        {
            
                printf("\nWhat priority do you want to filter by? [1-3]: ");
                scanf(" %d", &Priority_Filter);
            
            
            printf("\n====================================================\n");
            printf("Filter:   by priority (%d)\n", Priority_Filter);

            Priority_cost = 0;
           
            for (i = 0; i < Wish_item; i++)
            {
                if (PRIORITY[i] == Priority_Filter)
                {
                    Priority_cost += COST[i];
                }
            }

            printf("Amount:   $%1.2lf\n", Priority_cost);

            months = (Priority_cost / Monthly_Income) + 0.5;
            year = (int)months / 12;
            Months_remaining = (months - (year * 12)) + 0.5;
                       
            printf("Forecast: %d years, %d months\n", year, (int)Months_remaining);

            n = 0;
            
            
            for (i = 0; i < Wish_item; i++)
            {
                if ((FINANCE_OPTN[i] == 'y') && (PRIORITY[i] == Priority_Filter))
                {
                    n++;
                }
            }
            
            if (n != 0)
            {
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }

            printf("====================================================\n\n");
            
        }

        else if (!(select == 0 || select == 1 || select == 2))
        {
            printf("\nERROR: Invalid menu selection.\n\n");
            
        }     
    } while (select != 0);

    printf("\nBest of luck in all your future endeavours!\n");
    return 0;
}