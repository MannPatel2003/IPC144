/*
*****************************************************************************
                          Workshop - #5 (P2)
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
#define LOG_DAYS 3

int main(void)
{
    const int Jan = 1, Dec = 12;
    int YEAR, MONTH, i;
    float Morning_Rate, Evening_Rate, Total_morningrate = 0, Total_eveningrate = 0;
    

    printf("General Well-being Log\n");
    printf("======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &YEAR, &MONTH);

        if (!(YEAR >= MIN_YEAR && YEAR <= MAX_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        if (!(MONTH >= 1 && MONTH <= 12))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
    } while ((YEAR <= MIN_YEAR || YEAR >= MAX_YEAR) && (MONTH <= Jan || MONTH >= Dec));

    printf("\n*** Log date set! ***\n\n");
    

    for (i = 1; i <= LOG_DAYS; i++)
    {

        switch (MONTH)
        {
        case 1: printf("%d-JAN-0%d\n", YEAR, i);
            break;
        
        case 2: printf("%d-FEB-0%d\n", YEAR, i);
            break;

        case 3: printf("%d-MAR-0%d\n", YEAR, i);
            break;
        
        case 4: printf("%d-APR-0%d\n", YEAR, i);
            break;
       
        case 5: printf("%d-MAY-0%d\n", YEAR, i);
            break;
        
        case 6: printf("\n%d-JUN-0%d", YEAR, i);
            break;
       
        case 7: printf("%d-JUL-0%d\n", YEAR, i);
            break;
        
        case 8: printf("%d-AUG-0%d\n", YEAR, i);
            break;
        
        case 9: printf("%d-SEP-0%d\n", YEAR, i);
            break;
        
        case 10: printf("%d-OCT-0%d\n", YEAR, i);
            break;
       
        case 11: printf("%d-NOV-0%d\n", YEAR, i);
            break;

        case 12: printf("%d-DEC-0%d\n", YEAR, i);
            break;
        }

        do
        {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%f", &Morning_Rate);

            if (Morning_Rate < 0.0 || Morning_Rate>5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (Morning_Rate < 0.0 || Morning_Rate>5.0);

        do
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%f", &Evening_Rate);

            if (Evening_Rate < 0.0 || Evening_Rate>5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (Evening_Rate < 0.0 || Evening_Rate>5.0);

        Total_morningrate += Morning_Rate;
        Total_eveningrate += Evening_Rate;

        printf("\n");
    }

    printf("Summary\n=======\n");
    printf("Morning total rating: %.3f\n", Total_morningrate);
    printf("Evening total rating:  %.3f\n", Total_eveningrate);
    printf("----------------------------\n");

    printf("Overall total rating: %.3f\n\n", (Total_morningrate + Total_eveningrate));

    printf("Average morning rating:  %.1f\n", (Total_morningrate / LOG_DAYS));
    printf("Average evening rating:  %.1f\n", (Total_eveningrate / LOG_DAYS));
    printf("----------------------------\n");

    printf("Average overall rating:  %.1f\n", ((Total_morningrate + Total_eveningrate) / (LOG_DAYS * 2)));

    return 0;
}

    

    

    
    



