
#include <stdio.h>

int main(){
    int a, b, temp;

    printf("Enter A and B:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Value of A is %d  and Value of B is %d\n", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("Value of A is %d  and Value of B is %d\n", a, b);
    return 0;
}