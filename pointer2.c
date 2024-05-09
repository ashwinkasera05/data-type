#include<stdio.h>
void swap(int*a,int*b);
void main()
{
    int m=20,n=40;
    printf("value of swap m=%d and n=%d",m,n);
    swap(&m,&n);
    
}
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nvalues after swap a=%d\n and b=%d ",*a,*b);
}