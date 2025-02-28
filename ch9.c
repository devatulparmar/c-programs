
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printStructureValue(struct student s1);

int main(){
    struct student s1 = {10, 7.5, "WELTEC"};

    s1.roll = 30;
    printStructureValue(s1);

    printf("New Roll No is : %d\n", s1.roll);
//    struct student s2 = {20, 9.5, "HELLO"};
//    struct student s3 = {30, 5.5, "WORLD"};
//

//
//    printf("-------------------------\n");
//
//    printf("Roll No is : %ld\n", s2.roll);
//    printf("CGPA is : %f\n", s2.cgpa);
//    printf("Name is : %s\n", s2.name);
//
//    printf("-------------------------\n");
//
//    printf("Roll No is : %ld\n", s3.roll);
//    printf("CGPA is : %f\n", s3.cgpa);
//    printf("Name is : %s\n", s3.name);

    // Array of Structures
//    struct student ECE[100];
//    struct student *ptr;
//    ECE[0].roll = 01;
//    ECE[1].roll = 02;
//    ECE[2].roll = 03;
//    ECE[3].roll = 04;
//    ECE[4].roll = 05;
//
//    strcpy(ECE[0].name, "Name1");
//    strcpy(ECE[1].name, "Name2");
//    strcpy(ECE[2].name, "Name3");
//    strcpy(ECE[3].name, "Name4");
//    strcpy(ECE[4].name, "Name5");
//
//    ptr = &s1;
//    for (int i = 0; i < 5; i++){
//        printf("Name is %s and Roll No is %d\n", ECE[i].name, ECE[i].roll);
//    }

//  Pointers to Structures
//    printf("Roll No is : %d\n", (*ptr).roll);
//    printf("CGPA is : %f\n", (*ptr).cgpa);
//    printf("Name is : %s\n", (*ptr).name);
//
//    printf("Roll No is : %d\n", ptr->roll);
//    printf("CGPA is : %f\n", ptr->cgpa);
//    printf("Name is : %s\n", ptr->name);

    return 0;
}

void printStructureValue(struct student s1){
    printf("Roll No is : %d\n", s1.roll);
    printf("CGPA is : %f\n", s1.cgpa);
    printf("Name is : %s\n", s1.name);

    s1.roll = 20;
    printf("Function Roll No is : %d\n", s1.roll);
}