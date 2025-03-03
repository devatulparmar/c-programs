// address_structure.c

#include <stdio.h>
#include <string.h>

struct address {
    int hNo;
    char city[100];
    int pinCode;
};

void _printAdd(struct address adds[100]){
    for(int i = 0; i < 2; i++){
        printf("Address is: %d, %s %d\n", adds[i].hNo, adds[i].city,adds[i].pinCode);
    }
}

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
    _printAdd(adds);
    return 0;
}

