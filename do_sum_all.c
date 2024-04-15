#include<stdio.h>
void main()
{
    float i=1,sum=0,avg;

    do
    {
        sum=sum+i;
        avg=sum/25.0;
        printf("sum =%f  \n",sum);
        i++;
    }
    while(i<=25);
}