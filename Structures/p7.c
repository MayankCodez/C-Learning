#include <stdio.h>

typedef struct complexno
{
    float real;
    float img;
}cn;

int main() {
    cn c1;
    c1.real=87.8;
    c1.img=76.5;
    printf("The complex number can be represented as %f +%fi",c1.real,c1.img);
    return 0;
}