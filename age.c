#include<stdio.h>
void main()
{
    int age;
    printf("enter the age : ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("this preson are eligible for vote ");
    }
    else
    {
        printf("this preson are not eligible for vote ");

    }
}