#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219158
    //printf("enter three numbers:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int min = a;
    if(b<min){
        min =b;
    }
    if(c<min){
        min = c;
    }

    int max = a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }

    printf("%d ",min);
    printf("%d ",max);



    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219158
