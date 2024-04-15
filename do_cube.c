#include<stdio.h>
void main()
{
    int i=1,cub,n;
    printf("enter a any number : " );
    scanf("%d",&n);
    do{
        cub=i*i*i;
        printf( " cube =%d \n",cub);
        i++;
    }
    while(i<=n);
}