#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // // Print the generated random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int guess, chance ;
    chance = 100;


    
    for (int i=0; i <= chance; i++)
    {
            printf("Enter your guess: ");
            scanf("%d", &guess);
        {   if (guess == -1){
                printf("Game Over , The number was %d\n", randomNumber);
                break;
            }
            if (guess == randomNumber)
            {
                printf("You guessed it! Congratulations! in just %d attempts\n", i) ;
                break;
            }
            else if (guess > randomNumber)
            {
                printf("Too high! Try again.\n");
            }
            else
            {
                printf("Too low! Try again.\n");
            }
        }
    }
    return 0;
}
