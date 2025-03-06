
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
//    ptr = (int *) malloc(5 * sizeof(int));
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 9;
    ptr[1] = 7;
    ptr[2] = 5;
    ptr[3] = 3;
    ptr[4] = 1;
    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    printf("------------------\n");
    for (int i = 0; i < 6; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}