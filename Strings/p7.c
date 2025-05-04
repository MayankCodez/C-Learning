#include <stdio.h>
#include<string.h>

char* myencrypt(char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }
    return str;
}

int main() {
    char str[]="Mayank";
    char* str1=myencrypt(str);
    for (int i = 0; i < strlen(str1); i++)
    {
        str[i]=str[i]-1;
    }
    printf("%s",str1);
    
    
    return 0;
}