#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator using current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d",&guessed_number);
        if(guessed_number>randomNumber){
            printf("Guess lower number\n");
        }
        else if(guessed_number<randomNumber){
            printf("Guess higher number\n");
        }
        else{
            printf("Congrats!\n");
        }
        no_of_guesses++;
    } while (guessed_number!=randomNumber);

    printf("You guessed the number in %d guesses\n",no_of_guesses);
    
    //printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}