#include<stdio.h>
int main(){
    printf("enter your marks :\n");

    int marks ;
    scanf("%d",&marks);

    if(marks>100 || marks<0){
        //  printf("you give a wrong marks which is out of result marks range\n");
         printf("Invalid marks\n");
    }
    else if(marks>=80 && marks <=100){
        printf("you got A+\n");
    }
    else if(marks>=70 && marks <=79){
        printf("you got A\n");
    }
    else if(marks>=60 && marks <=69){
        printf("you got A-\n");
    }
    else if(marks>=50 && marks <=59){
        printf("you got B\n");
    }
    else if(marks>=40 && marks <=49){
        printf("you got C\n");
    }
    else if(marks>=33 && marks <=39){
        printf("you got D\n");
    }
    else{
        printf("you got F\n");
    }


    return 0;
}