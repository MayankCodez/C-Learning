#include <stdio.h>


int main() {
    FILE* ptr;
    ptr=fopen("Mayank.txt","a");
    char name1[20],name2[20];
    int salary1,salary2;

    printf("Enter name 1\n");
    scanf("%s",name1);
    printf("Enter salary 1\n");
    scanf("%d",&salary1);
    printf("Enter name 2\n");
    scanf("%s",name2);
    printf("Enter salary 2\n");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary2);
    fprintf(ptr,"%c",'\n');

    fclose(ptr);
    return 0;
}