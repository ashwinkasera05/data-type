#include<stdio.h>
void main()
{
    int f=1,i=1,n;
    printf("enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        printf("The Factorial of %d is: %d\n",n,  f);
        i++;
    }
}