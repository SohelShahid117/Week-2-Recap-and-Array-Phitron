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
    int zero =0;
    int one = 0;
    for(int i=0;i<n;i++){
        
        if(number[i]==0){
            zero++;
        }
        else if(number[i]==1){
            one++;
        }
    }
    
    printf("%d  %d",zero,one);
    return 0;
}
