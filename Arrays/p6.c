#include <stdio.h>

void printArray(int* , int );
int posint(int*,int );

void printArray(int* arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int posint(int* arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            count++;
        }
    }
    return count;
}

int main() {
    int arr[]={-3,-5,-6,1,2,3,-5,-2,9};
    printArray(arr,9);
    printf("The number of positive integers in the array are %d",posint(arr,9));
    return 0;
}