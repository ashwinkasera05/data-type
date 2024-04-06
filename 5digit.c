#include<stdio.h>
void main()
{
    int sum,a,b,c,d;
    printf("enter at any 5 digit no");
    scanf("%d",&sum);
    a=sum/10000;
    b=(sum/1000)%10;
    c=(sum/100)%10;
    d=sum%10;
    // e=sum%10;

    printf("sum individuals 5 digit no %d",a,b,c,d);
}