// Q14: Write a program to input a character and check whether it is a vowel or consonant.

#include <stdio.h>

int main(){
    char ch;

    printf("enter a character :");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }

    return 0;
}