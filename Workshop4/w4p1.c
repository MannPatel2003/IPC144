/*
*****************************************************************************
                          Workshop - #4 (P1)
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

    int Numof_Apples, Numof_Oranges, Numof_Pears, Numof_Tomatoes, Numof_Cabbages, Continue_Shopping = 1;
    int Picked_apples = 0, Picked_oranges = 0, Picked_pears = 0, Picked_tomatoes = 0, Picked_cabbages = 0;

    while (Continue_Shopping)
    {
        printf("Grocery Shopping\n");
        printf("================\n");

        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &Numof_Apples);
            if (Numof_Apples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (Numof_Apples < 0);
        printf("\n");

        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &Numof_Oranges);
            if (Numof_Oranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (Numof_Oranges < 0);
        printf("\n");

        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &Numof_Pears);
            if (Numof_Pears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (Numof_Pears < 0);
        printf("\n");

        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &Numof_Tomatoes);
            if (Numof_Tomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (Numof_Tomatoes < 0);
        printf("\n");

        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &Numof_Cabbages);
            if (Numof_Cabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (Numof_Cabbages < 0);
        printf("\n");

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        int Apples_left = Numof_Apples, Oranges_left = Numof_Oranges, Pears_left = Numof_Pears, Tomatoes_left = Numof_Tomatoes, Cabbages_left = Numof_Cabbages;

        while (Apples_left > 0)
        {
            while (Apples_left != 0)
            {
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &Picked_apples);

                if (Picked_apples > Apples_left)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n", Apples_left);
                }
                else if (Picked_apples <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (Picked_apples < Apples_left)
                {
                    Apples_left = Apples_left - Picked_apples;
                    printf("Looks like we still need some APPLES...\n");
                }
                else if (Picked_apples == Apples_left)
                {
                    Apples_left = Apples_left - Picked_apples;
                    printf("Great, that's the apples done!\n\n");
                }
            }
        }

        while (Oranges_left > 0)
        {
            while (Oranges_left != 0)
            {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &Picked_oranges);

                if (Picked_oranges > Oranges_left)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", Oranges_left);
                }
                else if (Picked_oranges <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (Picked_oranges < Oranges_left)
                {
                    Oranges_left = Oranges_left - Picked_oranges;
                    printf("Looks like we still need some ORANGES...\n");
                }
                else if (Picked_oranges == Oranges_left)
                {
                    Oranges_left = Oranges_left - Picked_oranges;
                    printf("Great, that's the oranges done!\n\n");
                }
            }
        }

        while (Pears_left > 0)
        {
            while (Pears_left != 0)
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &Picked_pears);

                if (Picked_pears > Pears_left)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", Pears_left);
                }
                else if (Picked_pears <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (Picked_pears < Pears_left)
                {
                    Pears_left = Pears_left - Picked_pears;
                    printf("Looks like we still need some PEARS...\n");
                }
                else if (Picked_pears == Pears_left)
                {
                    Pears_left = Pears_left - Picked_pears;
                    printf("Great, that's the pears done!\n\n");
                }
            }
        }

        while (Tomatoes_left > 0)
        {
            while (Tomatoes_left != 0)
            {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &Picked_tomatoes);

                if (Picked_tomatoes > Tomatoes_left)
                {
                    printf("You picked too many... only %d more TOMATO(S) are needed.\n", Tomatoes_left);
                }
                else if (Picked_tomatoes <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (Picked_tomatoes < Tomatoes_left)
                {
                    Tomatoes_left = Tomatoes_left - Picked_tomatoes;
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else if (Picked_tomatoes == Tomatoes_left)
                {
                    Tomatoes_left = Tomatoes_left - Picked_tomatoes;
                    printf("Great, that's the tomatoes done!\n\n");
                }
            }
        }

        while (Cabbages_left > 0)
        {
            while (Cabbages_left != 0)
            {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &Picked_cabbages);

                if (Picked_cabbages > Cabbages_left)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", Cabbages_left);
                }
                else if (Picked_cabbages <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (Picked_cabbages < Cabbages_left)
                {
                    Cabbages_left = Cabbages_left - Picked_cabbages;
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else if (Picked_cabbages == Cabbages_left)
                {
                    Cabbages_left = Cabbages_left - Picked_cabbages;
                    printf("Great, that's the cabbages done!\n\n");
                }
            }
        }

        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &Continue_Shopping);
        printf("\n");

    }

    printf("Your tasks are done for today - enjoy your free time!");

    return 0;
}