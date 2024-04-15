#include<stdio.h>
void main()
{
    int p1=1,p2=0,n=10,i,num;
    do
    {
         if (i > 2) 
         {
            num = p1 + p2;
            p2 = p1;
            p1 = num;
            printf("%d ", num);
        }
 
        // for first two terms
        if (i == 1) 
        {
            printf("%d ", p2);
        }
        if (i == 2) 
        {
            printf("%d ", p1);
        }
        i++;
    } while (i<=n);
    
}