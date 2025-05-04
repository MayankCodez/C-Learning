#include <stdio.h>


int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int i=2;
    /*while(i<=n/2){
        if(n%i==0){
            printf("The number is not a prime number\n");
            break;
        }
        else{
            printf("The number is a prime number\n");
            break;
        }
        i++;
    }
    */
   do
   {
    if(n%i==0){
        printf("The number is not a prime number\n");
        break;
    }
    else{
        printf("The number is a prime number\n");
        break;
    }
    i++;
   } while (i<=n/2);
   
    return 0;
}