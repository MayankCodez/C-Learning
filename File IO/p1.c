#include <stdio.h>

int main() {
    FILE *ptr;
    ptr=fopen("Mayank.txt","r");
    int num1,num2,num3;
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    fclose(ptr);
    return 0;
}