#include <stdio.h>

char* slice(char[],int,int);

char* slice(char str[],int m,int n){
    char *ptr1=&str[m];
    char *ptr2=&str[n];
    str=ptr1;
    str[n]='\0';
    return str;
}
int main() {
    char st[7]="Mayank";
    int m,n;
    printf("Enter the starting position of the sliced string\n");
    scanf("%d",&m);
    printf("Enter the ending position of the sliced string\n");
    scanf("%d",&n);
    printf("The sliced string is %s\n",slice(st,m,n));
    return 0;
}