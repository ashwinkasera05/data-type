#include<stdio.h>
void main()
{
    int i=1,tab,n;
    printf("enter at any no : ");
    scanf("%d",&n);
    do
    {
       tab=i*n;
       printf("%d * %d = %d\n",n,i,tab);  
       i++; 
        
    } while (i<=10);
    
} 