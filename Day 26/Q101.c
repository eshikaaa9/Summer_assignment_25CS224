#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    
    printf("Welcome to Number Guessing Game\n");
    printf("I am thinking of a number between 1 and 100\n");
    
    while (guess != secret) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess == secret) {
            printf("Correct! You guessed the number in %d attempts\n", attempts);
        } else if (guess < secret) {
            printf("Your guess is too low\n");
        } else {
            printf("Your guess is too high\n");
        }
    }
    
    return 0;
}
