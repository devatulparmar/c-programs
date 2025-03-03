
// create a structure to store vectors. then make function to return sum of 2 vectors.

#include <stdio.h>

struct vectors {
    int x;
    int y;
};

void sumOfVectors(struct vectors v1, struct vectors v2, struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of Vector X: %d\n", sum.x);
    printf("Sum of Vector Y: %d\n", sum.y);
}

int main(){
    struct vectors v1 = {5, 12};
    struct vectors v2 = {45, 6};
    struct vectors sum = {0};

    sumOfVectors(v1, v2, sum);
    return 0;
}
