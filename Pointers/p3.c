#include <stdio.h>

int change(int*);

int change(int* x){
    return (*x)*10;
}

int main() {
    int x=5;
    change(&x);
    printf("The changed value of x is %d\n",change(&x));
    
    return 0;
}