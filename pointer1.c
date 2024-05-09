#include<stdio.h>
void main()
{
    int var=3000, *ptr , **pptr;
    
    ptr=&var;

    pptr=&ptr;

    printf("value of var=%d\n",var);
    printf("value avaiable to *ptr=%d\n",*ptr);
    printf("value avaiable to **pptr=%d\n",**pptr);



}