#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
    printf("\nhello\n");
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        if(ch=='z'){
            printf("%c",'a');
        }
        else{
                printf("%c",ch+1);
        }
    }

    return 0;
}