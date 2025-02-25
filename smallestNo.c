// smallestNo.c

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check which number is smaller
    if (num1 < num2) {
        printf("The smallest number is %d\n", num1);
    } else {
        printf("The smallest number is %d\n", num2);
    }

    return 0;
}
