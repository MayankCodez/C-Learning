#include <stdio.h>

float force(int);

float force(int m){
    float g=9.8;
    return m*g;
}

int main() {
    int m=20;
    printf("The force of attraction exerted by the earth is : %f N\n",force(m));
    return 0;
}