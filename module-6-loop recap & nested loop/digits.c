#include<stdio.h>
int main(){
    printf("hi\n");
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
    // int n=121;
    // int n=39;
    // int n=123456;
    int n=1200;
    int count = 0;
    int sum =0;
    for(int i=n;i>=0;i--){
        count++;
        //  printf("%d",i);
         printf("count=%d\n",count);
         printf("\n\n");
        if(n>=0){
            int x;
            x=n%10;
            n=n/10;
            printf("mod=%d\n",x);
            sum = sum+x;
        }
        // printf("\n%d",i);
        if(n==0){
            break;
        }
        //  printf("\n%d",i);
    }
    printf("sum=%d",sum);


    return 0;
}