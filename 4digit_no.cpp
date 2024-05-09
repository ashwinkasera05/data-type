#include<iostream>
using namespace std; 

int main()
{
    int a,b,c,d,num,sum=0;
    cout<<"enter a 4 digit num :  ";
    cin>>num;
    a=num/1000;
    b=(num%1000)/100;
    c=(num%100)/10;
    d=(num%10);

    sum=a+b+c+d;

    cout<<"sum= "<<sum ;
    //return 0;
}