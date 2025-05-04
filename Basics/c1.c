#include <stdio.h>


int main() {
    int a=5;
    int b=6;
    int temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d",b);

    return 0;
}