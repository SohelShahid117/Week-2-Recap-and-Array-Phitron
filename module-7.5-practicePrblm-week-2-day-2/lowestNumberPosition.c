#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
    int n;
    scanf("%d",&n);

    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    int min = number[0];
    for(int i=0;i<n;i++){
        // printf("%d ",number[i]);
        if(number[i]<min){
            min = number[i];
        }
    }
    printf("\n%d\n",min);
    for(int i=0;i<n;i++){
        if(number[i]==min){
            printf("%d %d",number[i],i+1);
            break;
        }
    }


    return 0;
}