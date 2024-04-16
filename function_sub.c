#include<stdio.h>
void sub();
void main()
{
    sub();
  
}
void sub()
{
    int a,b,sub;
    printf("enter any no : ");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("sub = %d ",sub);
    
}
