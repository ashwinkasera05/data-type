#include<stdio.h>
int main()
{
    int second,hours,mints;
    printf("enter a second:");
    scanf("%d",&second);
    hours=second/3600;
    mints=(second-(3600*hours))/60;
    second=(second-(3600*hours)-(mints*60));
    printf("HOURS =%d\n",hours);
    printf("Mints =%d\n",mints);
    printf("Second =%d\n",second);

    return 0;
}