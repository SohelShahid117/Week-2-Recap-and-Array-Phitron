#include<stdio.h>
int main(){
    // printf("hello world\n");

    char ch;
    // printf("Enter a charecter:\n");
    scanf("%c",&ch);
    // printf("%c\n",ch);

    if(ch>='0' && ch<='9'){
        printf("IS DIGIT\n");
    }
    else{
        // printf("ALPHA\n");
        if(ch>='A' && ch<='Z'){
            printf("ALPHA\n");
            printf("IS CAPITAL\n");
        }
        else if(ch>='a' && ch<='z'){
            printf("ALPHA\n");
            printf("IS SMALL\n");
        }
    }
    return 0;
}

/*
ASCII for digit--->0-9::48-57
ASCII for capital->A-Z::65-90
ASCII for small--->a-z::97-122
*/