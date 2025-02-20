
#include <stdio.h>

void printTemperature(int t);

int squareRoot(int n);

int sumOfDigit(int n);

void printPattern(int n);

void printTemperature(int t) {
    if(t <= 0){
        printf("Temperature is Cold");
    } else {
        printf("Temperature is Hot");
    }
}

int squareRoot(int n){
    return n * n;
}

int sumOfDigit(int num){
     int sum = 0, r;
     while (num != 0) {
            r = num % 10;
            num = num / 10;
            sum = sum + r;           
        } 
    return sum;
}

void printPattern(int n){
    int space = n;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < space - 1; j++){
            printf(" ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("* ");
        }        
        space--;
        printf("\n");
    }
}

int main(){
    int temp, n;

    // printf("Enter the Temperature");
    // scanf("%d", &temp);
    // printTemperature(temp);

    // printf("Enter the Number to print square root ");
    // scanf("%d", &n);

    // printf("square root of a number is %d", squareRoot(n));

    // printf("Sum of Digit is %d", sumOfDigit(n));

    printPattern(2);

    return 0;    
}
