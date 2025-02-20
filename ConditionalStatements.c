#include <stdio.h>

int main() {
    int a = 3;
    int b = 3;
    int c = 0;
/*
    if(a < b){
        printf("A is less then B. \n");
    }
    else if(a == b){
       if(c < b){
        printf("C is less then B. \n");
       } 
       else {
        printf("B is less then C. \n");
       }
    }
    else {
        printf("B is less then A. \n");
    }
*/
    // a < b ? printf("A is less then B. \n") : printf("B is less then A. \n");

    int day = 16;
    char s = 'Q';
    switch (day){
    case 1:
        printf("Mon \n");
        switch (s){
        case 'A':
            printf("S value is A");
            break;
        case 'B':
            printf("S value is Q");
            break;
        default:
            printf("Nested Default");
            break;
        }
        break;
    case 2:
        printf("Tue");
        break;
    case 3:
        printf("Wed");
        break;
    case 4:
        printf("Thu");
        break;
    case 5:
        printf("Fir");
        break;  
    case 6:
        printf("Sat");
        break;          
    default:
        printf("Sunday");
        break;
    }


    return 0;
}