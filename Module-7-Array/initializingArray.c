#include<stdio.h>
int main(){
    printf("hello\n");
    int stdAge[5]={12,13,11,10,12};
    printf("4th std age = %d\n",stdAge[3]);

    int a[3] = {0};
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);

    float stdGPA[] = {3.43,2.89,3.98,3.99,2.67,3.63,3.45,3.77};
    printf("fifth std GPA = %lf\n",stdGPA[4]);
    printf("fifth std GPA = %.2lf\n",stdGPA[4]);

    int number[5] = {10,20};
    printf("4th number = %d\n",number[3]);

    stdAge[1] = stdAge[1]-2;
    printf("now 2nd student age is %d\n",stdAge[1]);


    return 0;
}