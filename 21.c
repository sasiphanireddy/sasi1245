#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,result=1,i;
    printf("enter the number \n");
    scanf("%d",&n);
        printf("enter the number \n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        result=result*n;
    }
    printf(" %d ",result);
    getch();
}
