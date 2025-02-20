
#include <stdio.h>

void fn(int a);

int main() {
    
    // int age = 22;

    // int *ptr = &age;

    // int _age = *ptr;

    // int **pptr = *ptr;

    // printf("%u \n", &age);
    // printf("%u \n", ptr);
    // printf("%u \n", &ptr);
    // printf("%u", &pptr);

    fn(age);
    fn(&ptr);

    return 0;
}

void fn(int a){
    printf("%u \n", a);
}