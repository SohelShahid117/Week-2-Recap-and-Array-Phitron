#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
    int n;
    scanf("%d",&n);

    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(int i=0;i<n;i++){
        // printf("%d ",number[i]);
        if(number[i]<=10){
            printf("A[%d] = %d\n",i,number[i]);
        }
    }



    return 0;
}