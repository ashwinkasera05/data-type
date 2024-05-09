#include<stdio.h>
void main()
{
    int array[5];
    int i,keynum,found=0;

    printf("enter 5 element one by one \n ");
    for(i=0;i<5;i++)
    {
        scanf("%d ",&array[5]);

    }
    printf("Input array is \n\n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",array[i]);
    }
    printf("\n enter the elment to be searched \n");
    scanf("&d ",&keynum);
     for(i=0;i<5;i++)
     {
        if(keynum==array[i])
        {
            found=1;
            break;
        }
     }
     if(found==1)
     {
        printf("elemnt present is array \n");
     }
     else
     {
         printf("elemnt is not present in array \n");
     }
}