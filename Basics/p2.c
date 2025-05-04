#include <stdio.h>


int main() {
    float radius;
    int height;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    printf("Enter the height of the circle\n");
    scanf("%d",&height);
    printf("The area of the circle is %f\n",3.14*radius*radius);
    printf("The volume of the cylinder is %f",3.14*radius*radius*height);
    return 0;
}