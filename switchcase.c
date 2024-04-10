#include<stdio.h>
void main()
{
    int num,years,mouth,weeks,days;
    float kg,gram,dollar,rupees,km,meter;
    printf("press 1 for weight : \n");
    printf("press 2 for indian currency : \n");
    printf("press 3 for days :  \n");
    printf("press 4 for  meter : \n");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("you choose your weight : \n");  
        printf("enter a kilogram : ");
        scanf("%f",&kg);
        gram=kg*1000;
        printf("weigth in gram = %.2f",gram);
        break;
       
        case 2:
        printf("you choose your indian currency : \n");  
        printf("enter a rupees : ");
        scanf("%f",&rupees);
        dollar=rupees/83;
        printf("currency in dollar = %.2f",dollar);
        break;
        
        case 3:
        printf("you choose days : \n"); 
        printf("enter a days : ");
        scanf("%d",&days);
       
        years=days/365;
        days=days%365;
        mouth=days/30;
        days=days%30;
        weeks=days/7;
        days=days%7;
        
        printf("Years: %d\n", years);
        printf("Mouth: %d \n", mouth);
        printf("Weeks: %d\n", weeks);
        printf("Days: %d\n", days);
        
        break;

        case 4:
        printf("you choosed distance : \n");  
        printf("enter a value of meter : ");
        scanf("%f",&meter);
        km=meter/1000;
        printf("distance in meter  = %.2f",km);
        break;
    }
    
}