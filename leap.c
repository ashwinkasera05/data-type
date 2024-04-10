#include<stdio.h>
void main()
{
    int year;
    printf("enter a year : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf(" That year is a leap year");
    }
    else
    {
        printf(" That year is a not leap year");
    }
}