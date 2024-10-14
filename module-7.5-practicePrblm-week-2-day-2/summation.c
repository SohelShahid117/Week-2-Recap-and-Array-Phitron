#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
    //output ok but Memory limit exceeded on test 1 er karone submission hossena how solve it
    int n;
    int number[n];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + number[i];
    }
    if(sum<0){
        // sum = sum*(-1);
        sum = -sum;
        // printf("%d",sum);
        
    }
    // else{
    //     printf("%d",sum);
    // }
    printf("%d",sum);
    return 0;
}
