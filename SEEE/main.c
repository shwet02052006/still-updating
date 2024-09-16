#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int num;
    int numofguesses=0;

    do
    {
        printf("guess the number : \n");
        scanf("%d", &num);

        if (num > random_number)
        {

            printf("lower number plz\n");
        }
        else if (num < random_number)
        {

            printf("higher number plz\n");
        }

        else
           
            {

                printf("you guessed right number\n");
            }
numofguesses++;

    } while (num != random_number);
printf("number of guesses %d\n",numofguesses);
    return 0;
}