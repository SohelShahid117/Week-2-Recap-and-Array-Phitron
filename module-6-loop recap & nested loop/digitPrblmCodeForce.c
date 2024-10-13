#include<stdio.h>
int main(){
    // printf("\nhi\n");
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
    int t;
    printf("enter the test case number:\n");
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("%d",n);
        }
        while(n>0){
            int digit =n%10;
            printf("%d ",digit);
            // printf("%d %d \n",n, digit);
            n=n/10; 
        }
        printf("\n");
    }


    return 0;
}