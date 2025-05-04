#include <stdio.h>


int main() {
    char st[7]="Mayank";
    char* i=st;
    int count=0;
    while((*i)!='\0'){
        count++;
        i++;
    }
    printf("The length of the string is %d",count);
    return 0;
}