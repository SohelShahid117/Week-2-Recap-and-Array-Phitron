#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

    // int n=122;
    // printf("enter a number between 10-100:\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x = n%10;
        n=n/10;
        int count =0;
        if(x%n==0 || n%x==0){
            count++;
            // printf("\nlucky:%d\n",n*10+x);
            printf("YES");
        }
        else{
            count++;
            // printf("\nnot lucky:%d\n",n*10+x);
            printf("NO");
        }
        if(count){
            break;
        }
        // printf("%d\n",i);

    }


    return 0;
}