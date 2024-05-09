#include<stdio.h>
void main()
{
    int var =20, *ip;

    ip=&var;
    
    printf("Address of var variabe : %d \n", &var);
     printf("Address of ip : %d\n", ip);
      printf("value of var using *ip variabe : %d \n", *ip);

}