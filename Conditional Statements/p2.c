#include <stdio.h>


int main() {
    float income;
    printf("Enter your annual income in lacs:\n");
    scanf("%f",&income);
    if(income<2.5){
        printf("No tax\n");
    }
    else if(income>=2.5&&income<5.0){
        printf("Tax is: %f",0.05*income);
    }
    else if(income>=5.0&&income<10.0){
        printf("Tax is :%f\n",0.2*income);
    }
    else{
        printf("Tax is:%f\n",0.3*income);
    }
    return 0;
}