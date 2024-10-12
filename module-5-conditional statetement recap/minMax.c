#include<stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/219158
    printf("eneter three number:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    if(a>=b && a>=c){
        printf("max number a=%d\n",a);
        if(b>=c){
            printf("min number c=%d",c);
        }
        else{
            printf("min number b=%d",b);
        }
    }
    else if(b>=a && b>=c){
        printf("max number b=%d\n",b);
        if(a>=c){
            printf("min number c=%d",c);
        }
        else{
            printf("min number a=%d",a);
        }
    }
    else if(c>=a && c>=b){
        printf("max number c=%d\n",c);
         if(a>=b){
            printf("min number b=%d",b);
        }
        else{
            printf("min number a=%d",a);
        }
    }


    return 0;
}