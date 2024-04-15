#include<stdio.h>
void main()
{
    int m,n,temp,rev=0;
    printf("enter any no : ");
    scanf("%d",&n);
    m=n;
    while(n!=0);
    {
        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }    
        if(m=rev)
        {
            printf("given no. is palidrome\n");
        }
        else
        {
            printf("given no. is not palidrome");

        }
    
}