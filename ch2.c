#include <stdio.h>

void printHello();

void printHi();

int addNumber(int a, int b);

int main() {

    //function call
    // printHi();

    int x = 55;
    int y = x;

    printf("%d", addNumber(x, y));

    printf("%d", x);

    // for(int i = 0; i < 5; i++){
    //     printf("Hello \n");
    // }

    // int i = 0;
    // while(i < 5){
    //     printf("World \n");
    //     i++;
    // }

    // int i = 0;
    // do{
    //     printf("Hi\n");
    //     i++;
    //     if(i == 3){
    //         continue;
    //     }
    // }
    // while(i < 5);

    // int a = 10;
    // int b = a;

    // a = 1;
    // b = 1;
    // switch(a){       
    //     case 1:

    //     printf("Hello \n");
    //     switch (b) {
    //         case 2:
    //             printf("B is 2");
    //             break;            
    //         default:
    //             printf("default B");
    //             break;
    //         }
    //     break;
    //     default:
    //         printf("Default");
    //         break;
    // }
    return 0;
}


void printHello(){
    printf("Hello World");
}

void printHi(){
    printf("Hi \n");
    printHello(); // function call
}


int addNumber(int a, int b){
    a = 4;
    return a + b;
}