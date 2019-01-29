#include<stdio.h>
main()
{
    int a,b,temp;
    printf("enter the a value \n");
    scanf("%d",&a);
    printf("enter the b value \n");
    scanf("%d",&b);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("the gcd is %d ",a);
    return 0;
}
