#include <stdio.h>
#include<string.h>

int main() {
    char str[]="dwggfudayiuayehjcgvgiuweyiueyuiwyv";
    char c='1';
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            count=1;
        }
    }
    if(count==1){
        printf("Character %c is present in string ",c);
    }
    else{
        printf("Character %c is not present in string ",c);
    }
    
    return 0;
}