#include<stdio.h>

int main(){
    printf("enter the element of array n=\n");
    int n;
    scanf("%d",&n);
    printf("n = %d\n",n);

    int allNumber[n];
    printf("enter the value of all element:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&allNumber[i]);
    }
    
    printf("all numbers are :\n");

    for(int i=0;i<n;i++){
        printf("%d ",allNumber[i]);
    }

    int min = allNumber[0];
    int max = allNumber[0];

    for(int j=0;j<n;j++){
        if(allNumber[j]<min){
            min = allNumber[j];
        }
        if(allNumber[j]>max){
            max = allNumber[j];
        }
    }
    printf("minimum number is : %d\n",min);

    /*
    for(int j=0;j<n;j++){
        if(allNumber[j]>max){
            max = allNumber[j];
        }
    }
    */
    printf("maximum number is : %d\n",max);

    return 0;
}