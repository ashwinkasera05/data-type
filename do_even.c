#include<stdio.h>
void main()
{
    int i=2,sum=0;
    do
    {
        sum=sum+i;
        printf("%d \n",i);
        printf("the sum= %d\n", sum);
        i+=2;
    }
    while(i<=25);
}