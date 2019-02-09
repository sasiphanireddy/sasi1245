#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rev=0,temp,rem;
    printf("enter the number \n");
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(n==rev)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    getch();
}
