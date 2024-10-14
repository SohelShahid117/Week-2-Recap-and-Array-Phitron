#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
    int n;
    scanf("%d",&n);
    // if(n>=2 && n<=1000){
    //     int number[]
    // }
    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(int i=0;i<n;i++){
        //printf("%d ",number[i]);
        if(number[i]>0){
            number[i]=1;
        }
        else if(number[i]<0){
            number[i]=2;
        }
    }
    //printf("\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",number[i]);
    }


    return 0;
}