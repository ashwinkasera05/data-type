#include<stdio.h>
void main()
{
    int sallo;
    printf("enter a no : ");
    scanf("%d",&sallo);
    if(sallo>10 || sallo<10 || sallo==10)
    {
        printf("this is accpet to all no.");
    }
    else
    {
        printf("this is not accpet to all no."); 
    }
}