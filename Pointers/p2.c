#include <stdio.h>

void find_address(int *);

void find_address(int *i)
{
    printf("The address of i inside the function is %p\n", i);
}

int main()
{
    int i = 56;
    int *j = &i;
    printf("The address of i is %p\n", j);
    find_address(j);

    return 0;
}