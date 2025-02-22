
#include <stdio.h>

void printPascal(int n) {
    int arr[n][n]; // Create a 2D array to store the triangle values

    // Generate Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // First and last elements in every row are 1
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                // Other elements are the sum of the two elements directly above
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++) {
        // Print leading spaces to format the triangle shape
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row;
     printf("Enter Row: ");
     scanf("%d", &row);
    printPascal(row);
    return 0;
}