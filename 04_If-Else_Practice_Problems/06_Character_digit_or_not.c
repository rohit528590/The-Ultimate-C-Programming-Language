// Write a program to check if given character is digit or not.
#include<stdio.h>
int main(){
    char ch;
    printf(" Enter Character: ");
    scanf(" %c",&ch);
    if (ch>='0'&&ch<='9')
    {
        printf(" %c is digit.\n",ch);
    }
    else {
        printf(" %c is not digit.\n",ch);
    }
    return 0;
}