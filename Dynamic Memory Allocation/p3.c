#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=6;
    int* ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ",ptr[i]);
    }
    
    return 0;
}