#include<stdio.h>
int main(){
    printf("enter the input numbers:\n");
    int n;
    scanf("%d",&n);
   
    
    int even=0,odd=0,positive=0,negative=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        printf("%d ",x);
        if(x%2==0){
            //even
            even++;
        }
        else{
            //odd
            odd++;
        }
        if(x>0){
            //positive
            positive++;
        }
        else if(x<0){
             //negative
             negative++;
        }
    }
    /*
    printf("Even number:%d nos\n",even);
    printf("Odd number:%d nos\n",odd);
    printf("Positive number:%d nos\n",positive);
    printf("Negative number:%d nos\n",negative);
    */

   /*
    int x;
    for(int i=0;i<n;i++){
        scanf("%d ",&x);
        //printf("%d ",x);
    }
    printf("input numbers are :\n");
    for(int i=0;i<n;i++){
        //scanf("%d",&x);
        printf("%d ",x);
    }
    */

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