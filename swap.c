#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter the number  \n");
    scanf("%d",&a);
    printf("enter the number  \n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    getch();
}
