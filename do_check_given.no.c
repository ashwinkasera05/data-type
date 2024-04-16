#include<stdio.h>
void main()
{
    int number, rem, sum = 0, i=1;
 
    printf("Enter a Number: ");
    scanf("%d", &number);
    do
    {
        rem = number % i;
	    if (rem == 0)
        {
            sum = sum + i;
            i++;
           if (sum == number)
            printf("%d is perfect number", number);
           else
            printf("%d is not a perfect number", number);
            
        }    

    }
    while(i <= (number - 1));
}