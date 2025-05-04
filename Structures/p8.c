#include <stdio.h>
#include <string.h>
struct BankAccount
{
    int accNo;
    char name[20];
    int balance;
};


int main() {
    struct BankAccount b1;
    b1.accNo=6453;
    strcpy(b1.name,"Mayank");
    b1.balance=75000;
    printf("Bank Account details:\nAccount Number: %d\nName: %s\nBalance: %d\n",b1.accNo,b1.name,b1.balance);
    return 0;
}