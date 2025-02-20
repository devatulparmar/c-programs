// Program to print dimond star pattern
#include <stdio.h>

int main() {
    int temp;
    int temp2 = 2;
    int Number;

    printf("Enter a N value : ");
    scanf("%d", &Number);

    temp = Number;
   for(int i = 1; i <= Number; i++) {         
       for(int j=1; j <=temp - 1; j++){  
           printf(" ");
       } 
       for(int k=1; k <=2*i-1; k++){  
         printf("%d", i);  
       }  
       temp--;    
      printf("\n");  
    }  
    for(int i= Number - 1; i>=1; i--) {         
       for(int j= 1; j < temp2; j++){  
           printf(" ");
       } 
       for(int k=1; k <=2*i-1; k++){  
         printf("%d", i);  
       }  
       temp2++;    
      printf("\n");  
    }  
    return 0;
}