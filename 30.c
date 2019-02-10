#include<stdio.h>
void main()
{
    int i,result,n;
    printf("enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        result=n*i;
        printf("%d",result);
    }
    getch();
}
