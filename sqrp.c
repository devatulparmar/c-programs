
#include<stdio.h>

// hollow square pattern
int main(){
    int rows;

    printf("Enter the Row Count: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // inner loop to print * star in each row
        for (int j = 0; j < rows; j++) {
            // statement to check boundary condition
            if (i > 0 && i < rows - 1 && j > 0 && j < rows - 1) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}