#include<stdio.h>
int main(){
    // print the lowest number from 100-300 which is divided by-2,3,5
    for(int i=100;i<=300;i++){
        if(i%2==0 && i%3==0 && i%5==0){
            printf("%d is lowest number from 100-300 which is divided by-2,3,5\n",i);
            break;
        }
        printf("%d\n",i);
    }

    printf("\n\n\n");
      for(int i=100;i<=300;i++){
        if(i%2==0 && i%3==0 && i%5==0){
            printf("%d is lowest number from 100-300 which is divided by-2,3,5\n",i);
            // continue;
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}