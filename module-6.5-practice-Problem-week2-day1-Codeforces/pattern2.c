#include<stdio.h>
int main(){
    printf("Enter a number : \n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}

/*
5
5 4 3 2 1 
4 3 2 1
3 2 1
2 1
1
*/