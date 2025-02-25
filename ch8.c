#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printString(char str[]);

void convertVowelsToUpper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        // Check if the character is a lowercase vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            // Convert it to uppercase
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

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

    convertVowelsToUpper(name2);
    printf("%s", name2);

    return 0;
}

void printString(char str[]){
    for (int i = 0; str[i] != '\0';i++){
        printf("%c", str[i]);
    }
    printf("\n");
}