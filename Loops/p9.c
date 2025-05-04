#include <stdio.h>


int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int fact=n;
    int i=n-1;
    while(i>=1){
        fact=fact*i;
        i--;
    }
    printf("%d",fact);
    return 0;
}