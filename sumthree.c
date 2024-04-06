#include<stdio.h>
void main()
{
    int sum,a,b,c,n;
    printf("enter any three no.");
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    sum=a+b+c;  
    printf("sum of individusls digit is %d",sum);
}