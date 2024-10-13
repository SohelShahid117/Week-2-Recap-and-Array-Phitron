
#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
    printf("enter a number:\n");
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count++ ;
            printf("%d\n",i);
        }   
    }
    printf("%d\n",count);
    if(count==0){
        printf("%d",-1);
    }

    return 0;
}