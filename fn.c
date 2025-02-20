#include <stdio.h>

void printHello(int n);

// int sum(int a, int b);

int main() {

    int number;
    printf("Enter the VAlue of N: ");
    scanf("%d", &number);

    printHello(number);

    // printf("Value of Sum is : %d", sum(15, 15));
    return 0;
}

void printHello(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }    
}

// int sum(int a, int b){
//     return a + b;
// }