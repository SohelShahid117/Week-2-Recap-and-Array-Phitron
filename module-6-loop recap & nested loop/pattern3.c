#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
           printf("\n");
        for(int j=5;j>=1;j--){
            if(j>i){
            //    printf("j=%d",j);
                printf("*");
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }


    return 0;
}
