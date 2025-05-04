#include <stdio.h>
#include<string.h>

int main() {
    char str[]="dwggfudayiuayehjcgvgiuweyiueyuiwyv";
    char c='w';
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            count++;
        }
    }
    printf("Number of occurences of %c in the string is %d ",c,count);
    return 0;
}