#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 //printf("hello\n");

    int n;
    //printf("n=\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            // printf("*");
            printf(" ");
        }
        for(int k=1;k<=n-i;k++){
            printf("%d",k);
        }
        printf("\n");

    }


    return 0;
}

/*
In this problem you will be given an integer N and you will have to print a pattern with N numbers.

for example if N = 4, the pattern will be.
1
12
123
1234
 123
  12
   1
See input samples for better understanding.

Input Format

The input will contain a single integer N.
Constraints
1 <= N <= 9
Output Format

Print a pattern with N numbers according to the description.

Sample Input 0


3
Sample Output 0

1
12
123
 12
  1
Sample Input 1


5
Sample Output 1

1
12
123
1234
12345
 1234
  123
   12
    1

*/
