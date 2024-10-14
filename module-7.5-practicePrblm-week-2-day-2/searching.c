#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
    int n;
    int number[n];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    int searchingNumber;
    scanf("%d",&searchingNumber);
    printf("searching number = %d \n",searchingNumber);

    int count=0;

    for(int i=0;i<n;i++){
        
        // if(number[i]==x){
        //     count++;
        //     printf("i=%d ",i);
        //     printf("number=%d",number[i]);
        //     break;
        // }
        printf("%d ",number[i]);
    }

    if(count==0){
        printf("%d",-1);
    }

    return 0;
}