#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

void compareDate(struct date d1, struct date d2){
    if(d1.yyyy>d2.yyyy){
        printf("d2 was before d1\n");
    }
    else if(d1.yyyy==d2.yyyy){
        if(d1.mm>d2.mm){
            printf("d2 was before d1\n");
        }
        else if(d1.mm==d2.mm){
            if(d1.dd>d2.dd){
                printf("d2 was before d1\n");
            }
            else if (d1.dd==d2.dd){
                printf("The dates are same\n");
            }
            else{
                printf("d1 was before d2\n");
            }
        }
        else{
            printf("d1 was before d2\n");
        }
    }
    else{
        printf("d1 was before d2\n");
    }
}

int main() {
    struct date d1,d2;
    d1.dd=10;
    d1.mm=8;
    d1.yyyy=2005;

    d2.dd=19;
    d2.mm=3;
    d2.yyyy=2005;

    compareDate(d1,d2);
    
    return 0;
}