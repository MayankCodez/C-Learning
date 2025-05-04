#include <stdio.h>


int main() {
    int sum=0,i=1;;
    /*for(i=1;i<=5;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    */
    do
    {
        sum=sum+i;
        i++;
    } while (i<=5);
    printf("%d",sum);
    
    return 0;
}