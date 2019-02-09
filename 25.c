#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    printf("enter the num");
    scanf("%d",&a);
    printf("enter the num");
    scanf("%d",&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    getch();
}
