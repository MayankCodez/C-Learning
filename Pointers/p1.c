#include <stdio.h>


int main() {
    int i=75;
    int* j=&i;
    printf("The address of the variable is %p\n",j);
    printf("The value of the variable is %d\n",*j);
    return 0;
}