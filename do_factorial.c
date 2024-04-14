//wap to print factorial of given no.
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("enter any num :");
    scanf("%d",&n);
    do
    {
        fact=fact*n;
        n--;
    }
    while(n>0);
        printf("factorial = %d",fact);   
}