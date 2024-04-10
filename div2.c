#include<stdio.h>
void main()
{
    int a,b;
    printf("enter at any no:");
    scanf("%d%d",&a,&b);
    if(a%5==0 && b%7==0) 
    {
        
        
        printf("two number are same is called divisble ");
        
    }
    else
    {
        printf("two number are  not same is called divisble ");   
    }
}