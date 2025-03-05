
#include <stdio.h>

int main(){
    FILE *fptr;

///Check if a file exists before reading from it.
//    fptr = fopen("hello.txt", "r");
//    if(fptr == NULL){
//        printf("File does not exist!");
//    }
//    else{
//         fclose(fptr);
//     }
//

///Reading character from a file

//    fptr = fopen("hello.txt", "r");
//    for(int i = 0; i < 5; i++){
//        fscanf(fptr, "%c", &ch);
//        printf("character = %c\n", ch);
//    }
//

///Reading integer from a file
//    int number;
//    for(int i = 0; i < 3; i++){
//        fscanf(fptr, "%d", &number);
//        printf("Number = %d\n", number);
//    }

///Write to a file
//    fptr = fopen("hello.txt", "w");
//    char ch1 = 'W';
//    char ch2 = 'o';
//    char ch3 = 'r';
//    char ch4 = 'l';
//    char ch5 = 'd';

//    fprintf(fptr, "%c", ch1);
//    fprintf(fptr, "%c", ch2);
//    fprintf(fptr, "%c", ch3);
//    fprintf(fptr, "%c", ch4);
//    fprintf(fptr, "%c", ch5);

///Append to a file
//    fptr = fopen("hello.txt", "a");
//    char ch1 = 'W';
//    char ch2 = 'o';
//    char ch3 = 'r';
//    char ch4 = 'l';
//    char ch5 = 'd';

//    fprintf(fptr, "%c", ch1);
//    fprintf(fptr, "%c", ch2);
//    fprintf(fptr, "%c", ch3);
//    fprintf(fptr, "%c", ch4);
//    fprintf(fptr, "%c", ch5);


///Read a char using fgetc()
//    fptr = fopen("hello.txt", "w");
//    fputc('A', fptr);
//    fputc('p', fptr);
//    fputc('p', fptr);
//    fputc('l', fptr);
//    fputc('e', fptr);

///Write a char using fgetc()
    fptr = fopen("hello.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }

//    for(int i = 0; i < 5; i++){
//        printf("character = %c\n", fgetc(fptr));
//    }
//
    fclose(fptr);
    return 0;
}