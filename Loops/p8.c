#include <stdio.h>
int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int fact=n;
    for(int i=n-1;i>=1;i--){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}   