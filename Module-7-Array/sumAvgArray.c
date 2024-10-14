#include<stdio.h>
int main(){

    printf("enter the number of element in an array n=\n");
    int n;
    scanf("%d",&n);
    printf("n=%d\n",n);
    printf("now enter the value of %d elements\n",n);

    // int a[n] = {};
    int a[n] ;
    for(int i=0;i<n;i++){
        // printf("%d.\n",i);
        // scanf("%d ",&a[i]); //scanf e space takai problem e porechi
        scanf("%d",&a[i]);
    }

    int sum =0;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

        sum +=a[i];
    }
    printf("\n sum of all numbers = %d\n",sum);

    float avg = sum/n;
    printf("average = %.2lf\n",avg);



    return 0;
}