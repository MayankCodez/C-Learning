#include <stdio.h>


int main() {
    int arr[3][3][3];
    int* ptr=&arr[0][0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                    printf("%u\n",ptr);
                    ptr++;
            }
        }
    }
    
    return 0;
}