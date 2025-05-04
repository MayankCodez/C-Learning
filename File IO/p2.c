#include <stdio.h>


int main() {
    FILE *ptr;
    ptr=fopen("Table.txt","w");
    int num=5;
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d",num*(i+1));
        fprintf(ptr,"%c",'\n');
    }
    fclose(ptr);
    
    return 0;
}