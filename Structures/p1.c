#include <stdio.h>

struct Vector{
    int magnitude;
    int direction;
};

int main() {
    struct Vector v1;
    v1.magnitude=10;
    v1.direction=1;
    printf("%d %d",v1.magnitude,v1.direction );
    
    return 0;
}