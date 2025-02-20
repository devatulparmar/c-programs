#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 55;
    int outp = (a + b) * c;
    printf("outp :%d \n",outp);
    printf("sum of 2.0 & 3 :%f \n",2.0+3);
    printf("sum of 2.0 & 3.0 :%f \n",2.0+3.0);

    printf(" Output :%d",5-2/2*3+1);


printf("========Relational Operator==========\n");
printf("%d\n",4==4);
printf("%d\n",4<3);
printf("%d\n",3<4);
printf("%d\n",4<4);
printf("%d\n",4<=4);

printf("%d\n",4>3);
printf("%d\n",3>4);
printf("%d\n",4>4);
printf("%d\n",4>=4);

printf("%d\n",4!=3);


printf("========Logical Operator==========\n");

printf("3<4&&3<5 = %d\n",3<4&&3<5);
printf("3<4&&5<4 = %d\n",3<4&&5<4);

printf("3>4&&5>4 = %d\n",3>4&&5>4);
printf("3<4&&3<5 = %d\n",3<4&&3<5);
printf("!(3<4&&3<5) = %d\n", !(3<4&&3<5));
printf("!(4<3||5<3) = %d\n", !(4<3||5<3));

    return 0;
}