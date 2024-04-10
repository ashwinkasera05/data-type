#include<stdio.h>
void main()
{
    int num;
      kg,gram;
    printf("enter a value \n ");
    printf("press 1 for weight : \n");
    printf("press 2 for indian currency : \n");
    printf("press 3 for days :  \n");
    printf("press 4 for  meter : \n");
    scanf("%d",&num);
    switch (num)
    {
        case 1:  
        printf("enter a kilogram");
        scanf("%f",&kg);
        gram=kg*1000;
        printf("%d * %d = %d",gram,kg);
        break;
    }
    
}