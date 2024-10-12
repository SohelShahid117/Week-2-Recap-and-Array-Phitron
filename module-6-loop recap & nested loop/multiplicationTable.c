#include<stdio.h>
int main(){
    printf("Enter a multiplication number:\n");
    int n ;
    scanf("%d",&n);
    for(int i =1;i<=10;i++){
        // printf("%d X %d = %d\n",n,i,n*i);
        printf("%2d X %3d = %2d\n",n,i,n*i);
    }
    printf("\n\n");

    // for(int i=1;i<=n;i++){
    for(int i=5;i<=n;i++){
         for(int j =1;j<=10;j++){
            // printf("%d X %d = %d\n",n,i,n*i);
            printf("%2d X %3d = %2d\n",i,j,i*j);
        }
        printf("\n\n");
    }
   



    return 0;
}