#include<stdio.h>
int main(){
    printf("enter the numbers of input are:\n");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("input numbers are:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}

/*
Input:
5
-5 0 -3 -4 12

Output:
Even: 3
Odd: 2
Positive: 1
Negative: 3

*/