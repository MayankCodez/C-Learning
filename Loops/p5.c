#include <stdio.h>


int main() {
    int n=5, sum=0,i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}