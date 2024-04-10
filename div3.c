#include<stdio.h>
void main()
{
    int num;
    printf("enter a no : ");
    scanf("%d",&num);
    if(num/3==0 || num/4==0 || num/8==0)
    {
        printf("this no.divible by all");
    }
    else
    {
        printf("this no. not divible by all");
    }
}
