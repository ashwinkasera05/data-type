#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter any number : ");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            printf("%d  ",i);
        }
        i++;
    }
    while(i<=n);
}