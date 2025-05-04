#include <stdio.h>

void number_pattern(int);

void number_pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main() {
    int n=5;
    number_pattern(n);
    return 0;
}