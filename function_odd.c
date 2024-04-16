#include<stdio.h>
void odd();
void main()
{
   odd();
}
void odd()
{
    int i;
    for (i=1;i<=20;i+=2) 
    { 
    printf("%d ", i); 
    }
}
   