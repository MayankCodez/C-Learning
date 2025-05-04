#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=6;
    int* ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element ",i);
        scanf("%d",&ptr[i]);
    }
    printf("The array is :");
    for (int i = 0; i < 6; i++)
    {
        printf("  %d",ptr[i]);
    }
    
    
    return 0;
}