#include <stdio.h>

int main() {
    float num, arr[100], sum, average;

    // Input total numbers
    printf("Enter Total number: ");
    scanf("%f", &num);

    printf("\n");
    // Input numbers
    for(int i = 0; i < num; i++){
        printf("Enter number %d :", i + 1);
        scanf("%f", &arr[i]);
    }

    // sum of total numbers
    for(int j = 0; j < num; j++){
        sum += arr[j];
    }
    // Calculate the average
    average = sum / num;

    // Output the average
    printf("The average is %.2f\n", average);

    return 0;
}
