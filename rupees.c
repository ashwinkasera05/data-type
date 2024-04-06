#include<stdio.h>
void main()
{
    int note500,note200,note100,note50,note20,note10,note5,note2,note1,amount;
    printf("enter your amount : ");
    scanf("%d",&amount);

    note500=amount/500;
    amount=amount%500;

    note200=amount/200;
    amount=amount%200;

    note100=amount/100;
    amount=amount%100;

    note50=amount/50;
    amount=amount%50;

    note20=amount/20;
    amount=amount%20;

    note10=amount/10;
    amount=amount%10;

    note5=amount/5;
    amount=amount%5;

    note2=amount/2;
    amount=amount%2;

    note1=amount/1;
    amount=amount%1;

    printf("NOTE 500 %d\n",note500);
    printf("NOTE 200 %d\n",note200);
    printf("NOTE 100 %d\n",note100);
    printf("NOTE 50 %d\n",note50);
    printf("NOTE 20 %d\n",note20);
    printf("NOTE 10 %d\n",note10);
    printf("NOTE 5 %d\n",note5);
    printf("NOTE 2 %d\n",note2);
     printf("NOTE 1 %d\n",note1);

}