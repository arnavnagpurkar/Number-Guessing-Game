#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int randomNum = rand() % 100;

    int userNum;
    printf("Guess the number(The number will be between 1-100): ");
    scanf("%d", &userNum);

    int numGuesses = 0;

    while (1)
    {
        if (userNum > randomNum)
        {
            printf("A lower number please: ");
            scanf("%d", &userNum);
        }
        else if (userNum < randomNum)
        {
            printf("A bigger number please: ");
            scanf("%d", &userNum);
        }
        else if (userNum == randomNum)
        {
            printf("Correct Number Guessed in %d Guesses!", numGuesses+1);
            break;
        }
        else
        {
            printf("Something went wrong!");
        }

        numGuesses++;
    }

    return 0;
}
