/*
*****************************************************************************
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char type_1, type_2, type_3, grindsize_1, grindsize_2, grindsize_3, creamchoice_1, creamchoice_2, creamchoice_3, coffee_strength, cream_choice, maker;
    int badweight_1, bagweight_2, bagweight_3, serves_perday;
    double temp_1, temp_2, temp_3;

    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type_1);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize_1);
    printf("Bag weight (g): ");
    scanf(" %d", &badweight_1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamchoice_1);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &temp_1);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type_2);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize_2);
    printf("Bag weight (g): ");
    scanf(" %d", &bagweight_2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamchoice_2);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &temp_2);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type_3);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize_3);
    printf("Bag weight (g): ");
    scanf(" %d", &bagweight_3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamchoice_3);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &temp_3);
    printf("\n");

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", type_1 == 'L' || type_1 == 'l', type_1 == 'B' || type_1 == 'b', grindsize_1 == 'C' || grindsize_1 == 'c', grindsize_1 == 'F' || grindsize_1 == 'f', badweight_1, badweight_1 / GRAMS_IN_LBS, creamchoice_1 == 'Y' || creamchoice_1 == 'y', temp_1, (temp_1 * 1.8) + 32.0);
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", type_2 == 'L' || type_2 == 'l', type_2 == 'B' || type_2 == 'b', grindsize_1 == 'C' || grindsize_2 == 'c', grindsize_2 == 'F' || grindsize_2 == 'f', bagweight_2, bagweight_2 / GRAMS_IN_LBS, creamchoice_2 == 'Y' || creamchoice_2 == 'y', temp_2, (temp_2 * 1.8) + 32.0);
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n\n", type_3 == 'L' || type_3 == 'l', type_3 == 'B' || type_3 == 'b', grindsize_1 == 'C' || grindsize_3 == 'c', grindsize_3 == 'F' || grindsize_3 == 'f', bagweight_3, bagweight_3 / GRAMS_IN_LBS, creamchoice_3 == 'Y' || creamchoice_3 == 'y', temp_3, (temp_3 * 1.8) + 32.0);

    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream_choice);
    printf("Typical number of daily servings: ");
    scanf(" %d", &serves_perday);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_1 == 'L' || type_1 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_1 == 'B' || type_1 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_1 == 'F' || grindsize_1 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_1 == 'c' || grindsize_1 == 'C')), (serves_perday >= 1 && serves_perday <= 4) && (badweight_1 >= 0 && badweight_1 <= 250), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_1 == 'y' || creamchoice_1 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_1 == 'n' || creamchoice_1 == 'N')), ((maker == 'r' || maker == 'R') && (temp_1 >= 60.0 && temp_1 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_1 >= 70.0)));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_2 == 'L' || type_2 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_2 == 'B' || type_2 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_2 == 'F' || grindsize_2 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_2 == 'c' || grindsize_2 == 'C')), (serves_perday >= 5 && serves_perday <= 9) && (bagweight_2 == 500), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_2 == 'y' || creamchoice_2 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_2 == 'n' || creamchoice_2 == 'N')), ((maker == 'r' || maker == 'R') && (temp_2 >= 60.0 && temp_2 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_2 >= 70.0)));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_3 == 'L' || type_3 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_3 == 'B' || type_3 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_3 == 'F' || grindsize_3 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_3 == 'c' || grindsize_3 == 'C')), (serves_perday >= 10) && (bagweight_3 == 1000), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_3 == 'y' || creamchoice_3 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_3 == 'n' || creamchoice_3 == 'N')), ((maker == 'r' || maker == 'R') && (temp_3 >= 60.0 && temp_3 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_3 >= 70.0)));

    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream_choice);
    printf("Typical number of daily servings: ");
    scanf(" %d", &serves_perday);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_1 == 'L' || type_1 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_1 == 'B' || type_1 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_1 == 'F' || grindsize_1 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_1 == 'c' || grindsize_1 == 'C')), (serves_perday >= 1 && serves_perday <= 4) && (badweight_1 >= 0 && badweight_1 <= 250), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_1 == 'y' || creamchoice_1 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_1 == 'n' || creamchoice_1 == 'N')), ((maker == 'r' || maker == 'R') && (temp_1 >= 60.0 && temp_1 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_1 >= 70.0)));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_2 == 'L' || type_2 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_2 == 'B' || type_2 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_2 == 'F' || grindsize_2 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_2 == 'c' || grindsize_2 == 'C')), (serves_perday >= 5 && serves_perday <= 9) && (bagweight_2 == 500), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_2 == 'y' || creamchoice_2 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_2 == 'n' || creamchoice_2 == 'N')), ((maker == 'r' || maker == 'R') && (temp_2 >= 60.0 && temp_2 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_2 >= 70.0)));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", ((coffee_strength == 'm' || coffee_strength == 'M') && (type_3 == 'L' || type_3 == 'l')) || ((coffee_strength == 'r' || coffee_strength == 'R') && (type_3 == 'B' || type_3 == 'b')), ((maker == 'c' || maker == 'C') && (grindsize_3 == 'F' || grindsize_3 == 'f')) || ((maker == 'r' || maker == 'R') && (grindsize_3 == 'c' || grindsize_3 == 'C')), (serves_perday >= 10) && (bagweight_3 == 1000), ((cream_choice == 'y' || cream_choice == 'Y') && (creamchoice_3 == 'y' || creamchoice_3 == 'Y')) || ((cream_choice == 'n' || cream_choice == 'N') && (creamchoice_3 == 'n' || creamchoice_3 == 'N')), ((maker == 'r' || maker == 'R') && (temp_3 >= 60.0 && temp_3 <= 69.9)) || ((maker == 'c' || maker == 'C') && (temp_3 >= 70.0)));

    printf("Hope you found a product that suits your likes!\n");

    return 0;
}