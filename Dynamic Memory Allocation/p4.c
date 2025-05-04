#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=6;
    int* ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;
    ptr=realloc(ptr,10*sizeof(int));
    ptr[6]=7;
    ptr[7]=8;
    ptr[8]=9;
    ptr[9]=10;
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",ptr[i]);
    }
    
    return 0;
}