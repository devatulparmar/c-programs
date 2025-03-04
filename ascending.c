
// ascending.c

#include <stdio.h>

int main(){
    int arr[100], temp, number;

    printf("Enter Length of Digits:");
    scanf("%d", &number);

    printf("Enter Digits:\n");
    for(int i = 0; i < number; i++){
        scanf("%d", &arr[i]);
    }
    printf("Unsorted List is : ");
    for(int i = 0; i < number; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    // Bubble Sort to sort the array in ascending order
    for (int i = 0; i < (number - 1); i++) {  // Loop over each element in the array
        for (int j = 0; j < (number - 1) - i; j++) {  // Compare adjacent elements
            if (arr[j] < arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted List is : ");
    for(int i = 0; i < number; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}