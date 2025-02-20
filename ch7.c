
#include <stdio.h>

void printNumber(int arr[], int n);

int main() {
    int marks[] = {111, 55, 66, 88, 55, 44};

    int arr[2][2] = {{1,2},{3,4}};
    int arr2[2][2] = {{5,6},{7,8}};

    printf("%d %d \n", arr[0][0], arr[0][1]);
    printf("%d %d \n",arr[1][0], arr[1][1]);
    printf("----------------------------\n");
    printf("%d %d \n", arr2[0][0], arr2[0][1]);
    printf("%d %d \n",arr2[1][0], arr2[1][1]);
    printf("----------------------------\n");
    printf("%d %d \n", arr[0][0] + arr2[0][0], arr[0][1] + arr2[0][1]);
    printf("%d %d \n",arr[1][0] + arr2[1][0], arr[1][1] + arr2[1][1]);

    // printNumber(marks, 1);
    // printf("Enter Marks: \n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // printf("marks 1 = %d, marks 2 = %d, Marks 3 = %d", marks[0], marks[1], marks[2]);

    return 0;
}

void printNumber(int arr[], int n){
    printf("Array Value at %d Position %d", n, arr[n]);
}