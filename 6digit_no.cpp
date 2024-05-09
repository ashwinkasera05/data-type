#include<iostream>
using namespace std; 

int main()
{
    int a,b,c,d,e,f,num,sum=0;
    cout<<"enter a 4 digit num :  ";
    cin>>num;

    a=num/100000;
    b=(num%100000)/10000;
    c=(num%10000)/1000;
    d=(num%1000)/100;
    e=(num%100)/10;
    f=(num%10);
    sum=a+b+c+d+e+f;

    cout<<"sum= "<<sum ;
    //return 0;
}