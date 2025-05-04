#include <stdio.h>

int avg(int,int,int);

int avg(int a,int b, int c){
    return (a+b+c)/3;
}

int main() {
    int a=10,b=20,c=30;
    printf("The average of the numbers is %d\n",avg(a,b,c));
    return 0;
}