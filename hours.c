#include<stdio.h>
int main()
{
    int second,hours,mints;
    printf("enter a second:");
    scanf("%d",&second);
    hours=second/3600;
    mints=(second%3600)/60;
    second=(second)%60%3600;
    printf("HOURS =%d\n",second);
    printf("Mints =%d\n",second);
    printf("Second =%d\n",second);

    return 0;
}