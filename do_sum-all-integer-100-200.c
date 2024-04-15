#include<stdio.h>
void main()
{
    int i=100,sum=0;
    do
    {
        if(i%9==0)
        {
        sum=sum+i;
        printf("The sum : %d  \n",sum);
        }
        i++;
    } 
    while (i<=200);
    
}