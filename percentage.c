// program to calculate percentage of subjects 
// 45 / 3 
// total marks / total subjects 
// 45 / 100 * 100
//  marks / total marks * 100

// Si = P * R * T / 100

int calPercentage(int maths, int science, int english);
int simpleInterest(int p, int r, int t);

#include <stdio.h>

int main(){
    int maths, science, english, percentage;

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    printf("Enter English Marks: ");
    scanf("%d", &english);

    percentage = calPercentage(maths, science, english);

    printf("Total percentage is %d\n\n", percentage);

    printf("Simple interest is %d", simpleInterest(15000, 10, 2));

    return 0;
}

int calPercentage(int maths, int science, int english) {
    return (maths + science + english) * 100 / 300; // (maths + science + english) / 3;
}

int simpleInterest(int p, int r, int t){
    return (p * r * t) / 100;
}