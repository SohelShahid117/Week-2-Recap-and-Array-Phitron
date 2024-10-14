#include<stdio.h>
int main(){
    //printf("hello\n");
    int n;
    //printf("enter the total digit n=\n");
    scanf("%d",&n);
    //printf("n=%d\n",n);

    int number[n];

    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int zero =0;
    int one = 0;
    for(int i=0;i<n;i++){
        //printf("%d ",number[i]);
        if(number[i]==0){
            zero++;
        }
        else if(number[i]==1){
            one++;
        }
    }
    //printf("zero=%d one=%d",zero,one);
    printf("%d  %d",zero,one);





return 0;
}
