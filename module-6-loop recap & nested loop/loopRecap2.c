#include<stdio.h>
int main(){
    printf("hi\n");

    for(int i=0;i<5;i++){
        int count=0;
        for(int j=0;j<3;j++){
            count++;
        }
        printf("%d\n",count);
    }


    return 0;
}