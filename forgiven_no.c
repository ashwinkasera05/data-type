#include<stdio.h>
void main()
{
    int i,tab,n;
    printf("enter at any no : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       tab=i*n;
       printf("%d * %d = %d\n",n,i,tab);   
    }
}