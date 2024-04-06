#include<stdio.h>
void main()
{
    int days, years, weeks, mouth;
    printf("enter a days");
    scanf("%d",&days);

    years = days/365;
    days=days%365;
    mouth = days/30;
    days=days%30;
    weeks = days/7;
    days=days%7;


    

    printf("Years: %d\n", years);
    printf("Mouth: %d \n", mouth);
    printf("Weeks: %d\n", weeks);


}    