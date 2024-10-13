#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        // int k=1;
         printf("\n\n");
        // for(int j=k;j<=i;j++){

        /*
        for(int j=1;j<=i;j++){
            // printf("\n");
            // printf("%d ",j);
            printf("* ");
        }
        */
        for(int j=i;j>=1;j--){
            
            printf("%d ",j);
            // printf("* ");
            
        }
        
    }

    return 0;
}