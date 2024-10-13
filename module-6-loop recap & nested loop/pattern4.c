#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
         printf("\n");
        for(int j=(5-i);j>0;j--){
            //printf("*");
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
           printf("%d",k);
        }
        printf("\n");

    }


    return 0;
}
