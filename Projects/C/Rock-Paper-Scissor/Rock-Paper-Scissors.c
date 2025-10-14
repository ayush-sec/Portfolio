#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h>   // for seeding rand()

int main()
{
    // Defining Variables
    int a, b;

    // Asking user for his choice
    printf("Enter your option (ex : 1):\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n\n");
    printf("Enter your choice: ");
    scanf("%d", &a);

    // Random number between 1-3
    srand(time(0));
    b = rand() % 3 + 1;

    // Printing what computer chose
    printf("Computer Chose: %d\n\n", b);

    // Condition of Winning and losing
    if (a == b)
    {
        printf("Its a Tie!");
    }
    else if (((a == 1) && (b == 3)) || ((a == 2) && (b == 1)) || ((a == 3) && (b == 2)))
    {
        printf("You Won!");
    }
    else
    {
        printf("You lost!");
    }
    return 0;
}