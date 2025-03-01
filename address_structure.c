// address_structure.c

#include <stdio.h>
#include <string.h>

struct address {
    int hNo;
    char city[100];
    int pinCode;
};

int main(){
    struct address adds[100];

    printf("Enter Address\n");
    for(int i = 0; i < 2; i++){
        printf("Enter House No:\n");
        scanf("%d", &adds[i].hNo);
        printf("Enter City Name:\n");
        scanf("%s", adds[i].city);
        printf("Enter PinCode:\n");
        scanf("%d", &adds[i].pinCode);
        printf("-----------------------------------\n");
    }

    for(int i = 0; i < 2; i++){
        printf("Enter House No: %d\n", adds[i].hNo);
        printf("Enter House No: %s\n", adds[i].city);
        printf("Enter House No: %d\n", adds[i].pinCode);
        printf("-----------------------------------\n");
    }
    return 0;
}