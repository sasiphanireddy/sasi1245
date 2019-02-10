#include<stdio.h>
void main()
{
    int i,k,n,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the number \n");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        sum=sum+k+i;
        printf("%d ",sum);
    }
    getch();
}
