#include <stdio.h>


int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("The number is not a prime number\n");
            break;
        }
        else{
            printf("The number is a prime number\n");
            break;
        }
    }
    return 0;
}