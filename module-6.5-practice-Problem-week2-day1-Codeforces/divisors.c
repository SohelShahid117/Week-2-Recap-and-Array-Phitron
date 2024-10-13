#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
    printf("enter a number:\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}