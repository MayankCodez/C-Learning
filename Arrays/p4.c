#include <stdio.h>


int main() {
    int arr[10];
    int n;
    printf("Enter the number whose table needs to be stored \n");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        arr[i]=n*(i+1);
        printf("%d\n",arr[i]);
    }
    
    return 0;
}