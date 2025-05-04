#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer=(rand() % 3);
    printf("Enter 0 for Rock, 1 for Paper and 2 for Scissors\n");
    scanf("%d",&player);
    printf("Computer chose %d\n",computer);
    if (player==computer)
    {
        printf("It's a draw\n");
    }
    else if(player==0){
        if(computer==1){
            printf("You lose\n");
        }
        else if(computer==2){
            printf("You win\n");
        }
    }
    else if(player==1){
        if(computer==0){
            printf("You win\n");
        }
        else if(computer==2){
            printf("You lose\n");
        }
    }
    else if(player==2){
        if(computer==0){
            printf("You lose\n");
        }
        else if(computer==1){
            printf("You win\n");
        }
    }
    
    return 0;
}