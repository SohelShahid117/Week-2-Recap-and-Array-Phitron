#include<stdio.h>
int main(){
    // printf("hi\n");
    printf("enter a number:\n");
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even\n");
        /*
         if(n>0){
            printf("Positive\n");
        }
        else{
            printf("Negative\n");
        }
        */
    }
    else{
        printf("Odd\n");
        /*
        if(n>0){
            printf("Positive\n");
        }
        else{
            printf("Negative\n");
        }
        */
    }
        if(n>0){
            printf("Positive\n");
        }
        else if(n<0){
            printf("Negative\n");
        }


    return 0;
}