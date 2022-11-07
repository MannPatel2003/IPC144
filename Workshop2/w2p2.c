/*
****************************************************************************
                           Workshop - #2 (Part-2)
Full Name   : Mann Manishkumar Patel
Student Id# : 164282212
Email       : mpatel462@myseneca.ca
Section     : NLL

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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    double SMALL, MEDIUM, LARGE, AVG;
    int P_quantity, T_quantity, S_quantity, P_subTotal, P_total, P_tax, T_subTotal, T_total, T_tax, S_subTotal, S_total, S_tax, SUB_TOTAL, Tax, TOTAL, Toonies = 200, Loonies = 100, Quarters = 25, Dimes = 10, Nickels = 5, Pennies = 1, noofToonies, noofLoonies, noofQuaters, noofDimes, noofNickels, noofPennies, t, l, q, d, n, p;

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
    printf("LARGE  : $%0.2lf\n", LARGE);

    printf("\nPatty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &P_quantity);
    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &T_quantity);
    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &S_quantity);

    //Calculation
    P_subTotal = P_quantity * (int)(SMALL * 100);
    P_tax = (P_subTotal * TAX) + 0.5;
    P_total = P_subTotal + P_tax;

    S_subTotal = S_quantity * (int)(MEDIUM * 100);
    S_tax = (S_subTotal * TAX) + 0.5;
    S_total = S_subTotal + S_tax;

    T_subTotal = T_quantity * (int)(LARGE * 100);
    T_tax = (T_subTotal * TAX) + 0.5;
    T_total = T_subTotal + T_tax;

    SUB_TOTAL = P_subTotal + S_subTotal + T_subTotal;
    Tax = P_tax + S_tax + T_tax;
    TOTAL = P_total + S_total + T_total;

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, SMALL, P_quantity, (double)P_subTotal / 100, (double)P_tax / 100, (double)P_total / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, MEDIUM, S_quantity, (double)S_subTotal / 100, (double)S_tax / 100, (double)S_total / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, LARGE, T_quantity, (double)T_subTotal / 100, (double)T_tax / 100, (double)T_total / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (double)SUB_TOTAL / 100, (double)Tax / 100, (double)TOTAL / 100);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    //calculation
    noofToonies = SUB_TOTAL / Toonies;
    t = SUB_TOTAL % Toonies;
    noofLoonies = t / Loonies;
    l = t - noofLoonies * Loonies;
    noofQuaters = l / Quarters;
    q = l - noofQuaters * Quarters;
    noofDimes = q / Dimes;
    d = q - noofDimes * Dimes;
    noofNickels = d / Nickels;
    n = d - noofNickels * Nickels;
    noofPennies = n / Pennies;
    p = n - noofPennies * Pennies;

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)SUB_TOTAL / 100);
    printf("Toonies  %d %9.4lf\n", noofToonies, (double)t / 100);
    printf("Loonies  %3d %9.4lf\n", noofLoonies, (double)l / 100);
    printf("Quarters %3d %9.4lf\n", noofQuaters, (double)q / 100);
    printf("Dimes    %3d %9.4lf\n", noofDimes, (double)d / 100);
    printf("Nickels  %3d %9.4lf\n", noofNickels, (double)n / 100);
    printf("Pennies  %3d %9.4lf\n\n", noofPennies, (double)p / 100);

    AVG = (double)SUB_TOTAL / (double)(P_quantity + S_quantity + T_quantity) / 100;
    printf("Average cost/shirt: $%0.4lf\n\n", AVG);

    //calculation
    noofToonies = TOTAL / Toonies;
    t = TOTAL % Toonies;
    noofLoonies = t / Loonies;
    l = t - noofLoonies * Loonies;
    noofQuaters = l / Quarters;
    q = l - noofQuaters * Quarters;
    noofDimes = q / Dimes;
    d = q - noofDimes * Dimes;
    noofNickels = d / Nickels;
    n = d - noofNickels * Nickels;
    noofPennies = n / Pennies;
    p = n - noofPennies * Pennies;

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)TOTAL / 100);
    printf("Toonies  %d %9.4lf\n", noofToonies, (double)t / 100);
    printf("Loonies  %3d %9.4lf\n", noofLoonies, (double)l / 100);
    printf("Quarters %3d %9.4lf\n", noofQuaters, (double)q / 100);
    printf("Dimes    %3d %9.4lf\n", noofDimes, (double)d / 100);
    printf("Nickels  %3d %9.4lf\n", noofNickels, (double)n / 100);
    printf("Pennies  %3d %9.4lf\n\n", noofPennies, (double)p / 100);

    AVG = (double)TOTAL / (double)(P_quantity + S_quantity + T_quantity) / 100;
    printf("Average cost/shirt: $%0.4lf\n", AVG);

    return 0;
}