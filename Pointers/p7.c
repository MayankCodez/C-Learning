#include <stdio.h>

int change(int);
 
int change(int x){
    x=x*10;
    return x;
}
int main() {
    int x=5;
    
    change(x);
    printf("The value of x is %d\n",x);
    
    return 0;
}