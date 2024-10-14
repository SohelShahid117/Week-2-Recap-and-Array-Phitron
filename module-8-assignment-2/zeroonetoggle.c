#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    
    scanf("%d",&n);
    

    int number[n];

    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ",number[i]);
    // }

    int x;
    scanf("%d",&x);
    if(number[x-1]==0){
        number[x-1] = 1;
    }
    else{
        number[x-1] = 0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",number[i]);
    }

    return 0;
}
