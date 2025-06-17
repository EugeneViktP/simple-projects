#include <stdio.h>

int main(void)
{
    int secrteNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secrteNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;

        } else {
            outOfGuesses = 1;
        }
        
    }
    if (outOfGuesses == 1) {
        printf("You lost");
    } else {
        printf("You win");
    }
    
    return 0;
}