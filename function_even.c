#include<stdio.h>
void even();
void main()
{
   even();
}
void even()
{
    int i;
    for (i=2;i<=20;i+=2) 
    { 
    printf("%d ", i); 
    }
}
   