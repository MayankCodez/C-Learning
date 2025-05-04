#include <stdio.h>

void star(int);

void star(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n=3;
    star(n);
    return 0;
}