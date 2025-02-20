#include<stdio.h>

int main(){
    int row, count, count2;

    printf("Enter the Row Count: ");
    scanf("%d", &row);

    count2 = count = row;
    for(int i =0; i < row; i++){
        for(int j = 0; j < count; j++){
            printf("%d", j);
        }
        for (int k = 0; k <row - count; k++)
        {
            printf("*");
        }
        for (int k = 0; k < row - count2; k++)
        {
            printf("*");
        }
        for(int j = 0; j < count2; j++){
            printf("%d", j);
        }
        printf("\n");
        count--;
        count2--;
    }    
    count2 = count = row;
    for(int i =0; i < row; i++){
        for(int j = 0; j < row - (count - 1); j++){
            printf("%d", j);
        }
        for (int k = 0; k < count - 1; k++)
        {
            printf("*");
        }
        for (int k = 0; k < count2 - 1; k++)
        {
            printf("*");
        }
        for(int j = 0; j < row - (count2 - 1); j++){
            printf("%d", j);
        }
        printf("\n");
        count--;
        count2--;
    }

    return 0;
}