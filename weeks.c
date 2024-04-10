#include<stdio.h>
void main()
{
    int num;
    printf("enetr a number : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1 :printf("MONDAY"); break;
    case 2 :printf("TUESDAY"); break;
    case 3 :printf("WEDNUSDAY"); break;
    case 4 :printf("THUSDAY"); break;
    case 5 :printf("FRIDAY"); break;
    case 6 :printf("SATURDAY"); break;
    case 7 :printf("SUNDAY"); break;
   
    default:printf("enter please no.1 to 7"); break;
    }
}