#include <stdio.h>

int mystrlen(char str[]){
    char* i=str;
    int count=0;
    while((*i)!='\0'){
        count++;
        i++;
    }
    return count;
}

void mystrcpy(char source[], char target[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i]=source[i];
    }
    target[mystrlen(source)]='\0';
    
}

int main() {
    char source[]="Mayank";
    char target[30];
    mystrcpy(source,target);
    printf("%s",target); 
    return 0;
}