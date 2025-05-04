#include <stdio.h>

void is_palindrome(int);

void is_palindrome(int n){
    int reversed =0, original=n,remainder;
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if(original==reversed){
        printf("The number is a palindrome \n");
    }
    else{
        printf("The number is not a palindrome \n");
    }
}
int main() {
    int n=1341;
    is_palindrome(n);
    return 0;
}