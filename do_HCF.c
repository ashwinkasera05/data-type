#include<stdio.h>
void main()
{
    int a,b,i,hcf;
    a=12;
    b=16;
    i=1;
    do
    {
       if(a%i == 0 && b%i == 0)
       {
       hcf=i;
       }
       printf("HCF = %d\n", hcf); 
       i++;
    } 
    while (i <= a || i <= b);
    
}