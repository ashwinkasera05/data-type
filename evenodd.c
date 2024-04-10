#include<stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    switch (num%2==0)
    {
    case 1:printf("this no : is EVEN"); break;
    case 0:printf("this no : is ODD"); break;
    
    }
}