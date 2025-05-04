#include <stdio.h>

struct Vector{
    int magnitude;
    int direction;
};

struct Vector sumVector(struct Vector v1, struct Vector v2){
    struct Vector v3;
    v3.magnitude=v1.magnitude+v2.magnitude;
    v3.direction=v1.direction=v2.direction;
    return v3;
}

int main() {
    struct Vector v1,v2;
    v1.magnitude=10;
    v1.direction=1;
    v2.magnitude=20;
    v2.direction=2;
    printf("The magnitude is %d and direction is %d of the sum ",sumVector(v1,v2).magnitude,sumVector(v1,v2).direction);
    return 0;
}