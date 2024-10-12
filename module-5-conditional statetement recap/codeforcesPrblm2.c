#include<stdio.h>
int main(){

    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

    printf("Enter three numbers:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c){
        printf("%d ",a);
        if(b>=c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b<=a && b<=c){
        printf("%d ",b);
        if(a>=c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else if(c<=b && c<=a){
        printf("%d ",c);
        if(a>=b){
            printf("%d",a);
        }
        else{
            printf("%d",b);
        }
    }


    return 0;
}
