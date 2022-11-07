/*
****************************************************************************
                <assessment name example: Workshop - #2 (Part-1)
Full Name   : Mann Manishkumar Patel
Student Id# : 164282212
Email       : mpatel462@myseneca.ca
Section     : CPA

Authenticity Declaration:
I declare this submission is the result of my own work and has not benn
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    double SMALL, MEDIUM, LARGE;
    int number, subtotal, final_total, tax;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &SMALL);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MEDIUM);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LARGE);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%0.2lf\n", SMALL);
    printf("MEDIUM : $%0.2lf\n", MEDIUM);
    printf("LARGE  : $%0.2lf\n\n", LARGE);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &number);

    subtotal = number * (int)(SMALL * 100);
    tax = (subtotal * TAX) + 0.5;
    final_total = subtotal + tax;

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", number);
    printf("Sub-total: $%8.4lf\n", (double)subtotal / 100);
    printf("Taxes    : $%8.4lf\n", (double)tax / 100);
    printf("Total    : $%8.4lf\n", (double)final_total / 100);

    return 0;
}