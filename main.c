// Number Guessing Game
// Created by Jeet Panchal on 1/27/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 6


int main(int argc, char* argv[]) {
    
    int play_again = 1;
    srand(time(NULL));

    while (play_again == 1) {

        int random = rand() % 101;
        int guess = 0;
        int count = 1;
        printf("\nThis is a random number guessing game. The program will generate a random integer 0-100 inclusive, and you must guess what the number is within 6 tries. After each guess the program will tell you whether if the number is less than or greater than your guess!\n\n");
        
        while (count <= MAX_TRIES) {
            printf("Your guess: ");
        
            if (scanf("%d", &guess) != 1) {
                printf("Invalid input! Please enter a number.\n");
                
                while (getchar() != '\n'); // Clears the bad input from the buffer
                continue;
                
            }
            if (guess < random) {
                printf("Too low, try again.\n");
                printf("Number of guesses had: %d\n\n", count);
            }
            else if (guess > random) {
                printf("Too high, try again.\n");
                printf("Number of guesses had: %d\n\n", count);
            }
            else {
                printf("You guess correctly! The randomly generated number was: %d\n", random);
                break;
            }
            count++;
        }
        if (guess != random) {
            printf("You ran out of tries. The randomly generated number was: %d\n", random);
        }

        printf ("Do you want to play again? (1 for yes, 0 for no/quit): ");
        if (scanf("%d", &play_again) != 1) {
            play_again = 0;
        }
        if (play_again == 0) {
            printf("Thank ypou for playing!\n");
        }
    }
    
    return 0;
}
