#include <stdio.h>

int sum_naturals(int);

int sum_naturals(int n){
    if(n==0){
        return 0;
    }
    return sum_naturals(n-1)+n;
}
int main() {
    int n=10;
    printf("The sum of first 10 natural numbers is %d\n",sum_naturals(n));
    return 0;
}