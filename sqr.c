#include<stdio.h>

int main(){
    int rows, Columns, space, space2, space3, space4;

    rows=5; Columns=2;

    space4 = space3 = space2 = space = rows;

    for (int i = 0; i < rows; i++)
    {
        for(int k = 0; k < space - 1; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int l = 0; l < (space2 - rows)*2; l++){
            printf(" ");
        }
        for (int m = 0; m < Columns; m++)
        {
            printf("*");
        }
        space--;
        space2++;
        for(int k = 0; k < (space3 - 1)*2; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int l = 0; l < (space4 - rows)*2; l++){
            printf(" ");
        }
        for (int m = 0; m < Columns; m++)
        {
            printf("*");
        }
        printf("\n");
        space3--;
        space4++;
    }    
    
    space4 = space3 = space2 = space = rows;

    for (int i = 0; i < rows; i++)
    {
        for(int k = 0; k < space - rows; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int a = 0; a < (space2 - 1)*2; a++){
            printf(" ");
        }
        for (int b = 0; b < Columns; b++)
        {
            printf("*");
        }
        space++;
        space2--;
        for(int k = 0; k < (space3 - rows)*2; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int a = 0; a < (space4 - 1)*2; a++){
            printf(" ");
        }
        for (int b = 0; b < Columns; b++)
        {
            printf("*");
        }
        printf("\n");
        space3++;
        space4--;
    }    


    space4 = space3 = space2 = space = rows;

    for (int i = 0; i < rows; i++)
    {
        for(int k = 0; k < space - 1; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int l = 0; l < (space2 - rows)*2; l++){
            printf(" ");
        }
        for (int m = 0; m < Columns; m++)
        {
            printf("*");
        }
        space--;
        space2++;
        for(int k = 0; k < (space3 - 1)*2; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int l = 0; l < (space4 - rows)*2; l++){
            printf(" ");
        }
        for (int m = 0; m < Columns; m++)
        {
            printf("*");
        }
        printf("\n");
        space3--;
        space4++;
    }    
    
    space4 = space3 = space2 = space = rows;

    for (int i = 0; i < rows; i++)
    {
        for(int k = 0; k < space - rows; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int a = 0; a < (space2 - 1)*2; a++){
            printf(" ");
        }
        for (int b = 0; b < Columns; b++)
        {
            printf("*");
        }
        space++;
        space2--;
        for(int k = 0; k < (space3 - rows)*2; k++){
            printf(" ");
        }
        for (int j = 0; j < Columns; j++)
        {
            printf("*");
        }
        for(int a = 0; a < (space4 - 1)*2; a++){
            printf(" ");
        }
        for (int b = 0; b < Columns; b++)
        {
            printf("*");
        }
        printf("\n");
        space3++;
        space4--;
    }    
    
    return 0;
}