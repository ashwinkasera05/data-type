#include<stdio.h>
void main()
{
float a1,a2,b1,b2,c;
//int n;
printf("enter weight of item1 and item2\n ");
scanf("%f%f",&a1,&b1);
printf("enter no of item 1 and 2\n");
scanf("%f%f",&a2,&b2);
c = ((a1*a2) + (b1*b2)) / (a2+b2);;

printf("the average is %f",c);

}

