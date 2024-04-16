#include<stdio.h>
void multi();
void main()
{
    multi();
  
}
void multi()
{
    int a,b,multi;
    printf("enter any no : ");
    scanf("%d%d",&a,&b);
    multi=a*b;
    printf("mutliple = %d ",multi);
    
}
