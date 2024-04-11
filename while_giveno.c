 #include<stdio.h>
 void main()
 {
    int i=1,tab,n;
    printf("enter at any no : ");
    scanf("%d",&n);
    while(i<=10)
    {
        tab=i*n;
        printf("%d * %d = %d\n",n,i,tab);
        i++;
    }

 }
 
 
