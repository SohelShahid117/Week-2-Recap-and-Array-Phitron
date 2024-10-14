#include<stdio.h>
int main(){
    //https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/vowels-27
    char ch;
    scanf("%c",&ch);

    if(ch=='a' ||ch=='A' ||ch=='e' ||ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }


    return 0;
}

/*
Babul is learning about vowels and consonants.
Now he wants you to write a program for him where he can give a letter and the program will tell if it's a vowel or a consonant.
He has given you the list of vowels to help you. (The vowels are a, e, i, o and u).

Input Format
Input will contain a single lower case letter C.
Constraints
C will be a letter between a to z (inclusive).
Output Format
Print "Vowel" if C is a vowel and "Consonant" otherwise.
Sample Input 0
a
Sample Output 0
Vowel
Sample Input 1
b
Sample Output 1
Consonant
*/