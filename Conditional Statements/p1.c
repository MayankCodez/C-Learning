#include <stdio.h>


int main() {
    int marks1,marks2, marks3;
    printf("Enter marks1: \n");
    scanf("%d",&marks1);
    printf("Enter marks2: \n");
    scanf("%d",&marks2);
    printf("Enter marks3: \n");
    scanf("%d",&marks3);
    
    if(marks1<33||marks2<33||marks3<33){
        printf("Student failed\n");
    }
    else if(marks1+marks2+marks3<40){
        printf("Student failed\n");
    }
    else{
        printf("Student pased in all subjects\n");
    }
    return 0;
}