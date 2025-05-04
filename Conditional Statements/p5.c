#include <stdio.h>


int main() {
    int a=10,b=5,c=99,d=101;
    if(a>b&&a>c&&a>d){
        printf("The greatest number is %d\n",a);
    }
    else if(b>a&&b>c&&b>d){
        printf("The greatest number is %d\n",b);
    }
    else if(c>a&&c>b&&c>d){
        printf("The greatest number is %d\n",c);
    }
    else{
        printf("The greatest number is %d\n",d);
    }
    return 0;
}