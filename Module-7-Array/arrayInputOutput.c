#include<stdio.h>
int main(){

    // int a[5]; //differet number dibe
    int a[5]={}; //best
    printf("give the value of 4th array:\n");
    scanf("%d",&a[3]);
    printf("%d %d\n",a[0],a[3]);

    printf("give the value of array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("now print the all value of array a[5]:\n");
      for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n now print memory address of array:\n");
    for(int i=0;i<5;i++){
        printf("%d ",&a[i]);
    }

    char p[] = {};
    printf("enter the charecter of p[]:\n");
    for(int i=0;i<3;i++){
        getchar();
        scanf("%c",&p[i]);
    }

    printf("now print the charecter of p[]:\n");
      for(int i=0;i<3;i++){
        printf("%c ",p[i]);
    }

    return 0;
}