#include <stdio.h>

struct complexno
{
    float real;
    float img;
};

void display(struct complexno c[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Complex number %d: %f + %fi\n",(i+1),c[i].real,c[i].img);
    }
    
}

int main() {
    struct complexno c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part of complexno %d:\n",(i+1));
        scanf("%f",&c[i].real);
        printf("Enter imaginary part of complexno %d:\n",(i+1));
        scanf("%f",&c[i].img);
    }
    display(c);
        
    return 0;
}