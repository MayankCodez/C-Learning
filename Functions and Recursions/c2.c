#include <stdio.h>

int fact(int);

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return fact(n-1)*n;
}

int main() {
    int n=5;
    printf("The factorial of %d is %d\n",n,fact(n));
    return 0;
}