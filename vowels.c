#include<stdio.h>
void main()
{
    char ch;
    printf("enter a no:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e')
    {
        printf("a,o,i,u,e is vowels");
    }
    else
    {
        printf("this alphabets are consonent");
    }
}