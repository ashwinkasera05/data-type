#include<stdio.h>
void evenOdd();
void main()
{
   evenOdd ();
}
void evenOdd()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even ");
    }
    else
    {
        printf("odd");
    }
}
