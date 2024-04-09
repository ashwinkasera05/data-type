#include<stdio.h>
void main()
{
    int a,b,c,n,rev;
    printf("enter at any value of user");
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
<<<<<<< HEAD
    c=(n%10);
=======
    c=n%10;
>>>>>>> 1064a307b6918a45d55d0e616bbd96cea0f76493
    rev=c*100+b*10+a;
    printf("reverse the value %d",rev);
}
