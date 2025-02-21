#include <stdio.h>
#include <string.h>

void printString(char str[]);

int main() {
    char name[100] = "World", name2[100] = "Hello";
//    fgets(name, 100, stdin);
//    fgets(name2, 100, stdin);
//    puts(name);
//    printf("%lu", strlen(name));
//    strcpy(name2, name);
//    printf("%s", strcat(name, name2));
    int result = strcmp(name, name2);
    printf("%d", result);
    return 0;
}

void printString(char str[]){
    for (int i = 0; str[i] != '\0';i++){
        printf("%c", str[i]);
    }
    printf("\n");
}