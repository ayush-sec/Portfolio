#include <stdio.h>

void calculater()
{
    printf("\t\t\t---Basic Calculator---\n");
    printf("\t\t\t\t\t\t Made by Ayush\n");
    printf("\n");
    // defining variables
    float digit1, digit2;
    int operator;

    // asking user for 1st digit
    printf("Enter 1st digit: \n");
    scanf("%f", &digit1);

    // asking user for 2nd digit
    printf("Enter 2nd digit: \n");
    scanf("%f", &digit2);

    // print operator the user wants to use
    printf("\n\n1.  Addition\n");
    printf("2.  Subtraction\n");
    printf("3.  Multiplication\n");
    printf("4.  Division\n\n");

    // asking user which operator to use
    printf("Enter the serial number of operator: ");
    scanf("%d", &operator);

    // checking the operator and doing calculation

    // Addition
    if (operator == 1)
    {
        printf("\nAddition: %f", digit1 + digit2);
    }

    // Subtraction
    else if (operator == 2)
    {
        printf("\nSubtraction: %f", digit1 - digit2);
    }

    // Multiplication
    else if (operator == 3)
    {
        printf("\nMultiplication: %f", digit1 * digit2);
    }

    // Division
    else if (operator == 4)
    {
        if (digit2 != 0)
            printf("\nDivision: %f", digit1 / digit2);
        else
            printf("\nError: Cannot divide by zero!\n");
    }

    // If wrong input
    else
    {
        printf("Wrong input!\n");
    }
}

// Asking person if he wants to do again

int main()
{
    int fd;
    calculater();
    printf("\n\t\tDo you wanna do again?: ");
    printf("\n\t1.  yes");
    printf("\n\t2.  no");
    printf("\n\t :");
    scanf("\n%d", &fd);

    // while loop
    while (fd == 1)
    {
        calculater();
        printf("\n\t\tDo you wanna do again?: ");
        printf("\n\t1.  yes");
        printf("\n\t2.  no");
        printf("\n\t : ");
        scanf("%d", &fd);
    }
}