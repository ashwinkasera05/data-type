#include<stdio.h>
void fun();
void main()
{
   fun ();
}
void fun()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("postive ");
    }
    else
    {
        printf("negtive");
    }
}
