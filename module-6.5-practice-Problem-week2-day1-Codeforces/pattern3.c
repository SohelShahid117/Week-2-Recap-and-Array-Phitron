#include<stdio.h>
int main(){
    printf("enter a number:\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j = 0; j <=i; j++)
        {
            printf("%c",i+65);
        }
        
        printf("\n");

    }

    return 0;
}

/*
6
A
BB
CCC
DDDD
EEEEE
FFFFFF
*/