#include <stdio.h>

int sum(int*,int*);
int avg(int*,int*);

int sum(int*x,int*y){
    return (*x)+(*y);
}

int avg(int* x,int* y){
    return ((*x)+(*y))/2;
}
int main() {
    int x=5,y=10;
    printf("The sum of x and y is %d\n",sum(&x,&y));
    printf("The avg of x and y is %d\n",avg(&x,&y));
    return 0;
}