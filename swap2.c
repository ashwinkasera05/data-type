#include<stdio.h>
void main()
{
    int a,b,c,temp;
    printf("enter a value");
    scanf("%d%d%d",&a,&b,&c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("swap of without using variable a=%d,b=%d,c=%d",a,b,c);
}