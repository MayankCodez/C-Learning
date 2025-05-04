#include <stdio.h>

float c_to_f(float);

float c_to_f(float c){
    return (c*9/5)+32;
}
int main() {
    float c=25.0;
    printf("Temperature in fahrenheit is %f\n",c_to_f(c));
    return 0;
}