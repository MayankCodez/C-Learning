#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[20];
    int salary;
};

int main() {
    struct employee e1;
    struct employee *ptr=&e1;
    ptr->code=1;
    strcpy(ptr->name,"Mayank");
    ptr->salary=10000;
    printf("The details of employee are Code: %d\nName:  %s\nSalary: %d\n",ptr->code,ptr->name,ptr->salary);
    return 0;
}