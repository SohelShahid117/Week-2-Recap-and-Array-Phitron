#include<stdio.h>
int main(){
    //printf("hi\n");
    //https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
    int a,b,c,d;
    //printf("enter then number of a,b,c,d:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int result1 = a+b-c;
    int result2 = a+b*c;
    int result3 = a-b+c;
    int result4 = a-b*c;
    int result5 = a*b+c;
    int result6 = a*b-c;

    if(result1==d || result2==d || result3==d || result4==d || result5==d || result6==d){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}