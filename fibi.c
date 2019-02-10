#include<stdio.h>
void main()
{
    int n,i,f1=0,f2=1,f3;
    printf("enter the number  \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    getch();
}
    
