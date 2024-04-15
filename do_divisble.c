#include<stdio.h>
void main()
{
    int i=1;
    printf("The numbers divisible by 3 , 4and 8 are: \n");
    do
    {
        
        if(i%3==0 && i%4==0 && i%8==0)
        { 
           printf("%d\n", i); 
        }
        i++;
            
    
    }
    while(i<=100);
}    