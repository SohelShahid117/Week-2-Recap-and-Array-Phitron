#include<stdio.h>
int main(){
    printf("hi\n");
    for(int i=1;i<=5;i++){
        for(int j=5;j>=1;j--){
            // printf(" ");
            if(j==i){
                for(int k=1;k<=j;k++){
                    printf("%d ",k);
                    // printf("* ");
                }
            }
             printf(" ");
        }
        printf("\n");
    }


    return 0;
}