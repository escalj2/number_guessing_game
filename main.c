#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

    char ans;
    bool play = true;
    int guess, randomnumber, counter;
    
    //Seed the random number generator
    srand(time(NULL));

    counter = 0;

    //Generate random number
    randomnumber = rand() % 100 + 1;

    printf("--------------------\n");
    printf("Let's play a game!\n");
    printf("I'm thinking of a number between 1-100...\n> ");
    
    //REMOVE AFTER TESTING
    printf("ANSWER: %d\n> ", randomnumber);

    do
    {
        scanf("%d", &guess);
        if (guess == randomnumber)
        {
            counter++;
            printf("Congrats, you guessed correctly! ");
            printf("The number was %d\n", randomnumber);
            printf("It took you %d guesses\n\n", counter);
            
            //Play Again?
            printf("Would you like to play again? (Y/N)\n> ");
            scanf("%c", &ans);
            if (ans == 'N' || ans == 'n') play = false;
            break;
        }
        else if (guess < randomnumber)
        {
            counter++;
            printf("Too low, guess again\n> ");
        }
        else{
            counter++;
            printf("Too high, guess again\n> ");
        }
    } while (guess != randomnumber);

    return 0;
}