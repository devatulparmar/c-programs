#include <stdio.h>
#include <stdlib.h>

int main() {
    int fno, sno, *ptr1 = &fno, *ptr2 = &sno;

    int a, b;

    printf("\n\n Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", &a); // Read the first number from the user and store it using ptr1
    printf(" Input the second number : ");
    scanf("%d", &b); // Read the second number from the user and store it using ptr2

    // Compare the values pointed by ptr1 and ptr2 to find the maximum number
    if (a > b) {
        printf("\n\n %d is the maximum number.\n\n", a); // Print the maximum number
    } else {
        printf("\n\n %d is the maximum number.\n\n", b); // Print the maximum number
    }
	return 0;
}
