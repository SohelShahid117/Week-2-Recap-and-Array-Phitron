#include<stdio.h>
int main(){
    printf("hello\n");
    int count = 0;
    for(int i=0;i<5;i++){
        // count++;
        for(int j=0;j<3;j++){
            count++;
        }
        printf("%d\n",count);
    }
    // printf("%d\n",count);

    return 0;
}