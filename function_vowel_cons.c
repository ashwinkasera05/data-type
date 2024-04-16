#include<stdio.h>
void vol();
void main()
{
    vol();
}
void vol()
{
    char ch;
    printf("enter a char : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("this alphabet is vowels");
    }
    else
    {
        printf("this alphabet is consonent");
    }
}
