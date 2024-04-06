#include<stdio.h>
void main()
{
    int a,b,c,temp;
    printf("enter a value");
    scanf("%d%d%d",&a,&b,&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("swap of without using variable a=%d,b=%d,c=%d",a,b,c);
}