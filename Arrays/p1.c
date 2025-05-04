#include <stdio.h>


int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=arr;
    printf("The third element is %d",*(ptr+2));
    return 0;
}