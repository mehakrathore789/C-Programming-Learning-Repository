/*
 * Project: Number Guessing Game
 * Description: The program picks a random number between 1 and 100.
 *              The player keeps guessing until they find it, receiving
 *              "too high" / "too low" feedback after each attempt.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL)); // seed the random number generator with the current time
    int secretNumber = (rand() % 100) + 1; // random number from 1 to 100

    int guess;
    int attempts = 0;

    printf("===== Number Guessing Game =====\n");
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! You guessed it in %d attempt(s).\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
