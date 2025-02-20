#include <stdio.h>

void printHello();

int main() {
    printHello(); // function call
    return 0;
}

void printHello(){
    int number;
    int recursion;
    printf("Enter the VAlue of N: ");
    scanf("%d", &number);
    
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", number, i, number * i);
    }    

    printf("Do you want to continue? (Press 1 for continue OR press any key for Exit.)\n");
    scanf("%d", &recursion);
   
    if(recursion == 1){        
      printHello(); // recursion call  
    }
}