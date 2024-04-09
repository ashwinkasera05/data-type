#include<stdio.h>
void main()
{
    int a,b,c,n,rev;
    printf("enter at any value of user");
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=(n%10);
    rev=c*100+b*10+a;
    printf("reverse the value %d",rev);
}