#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,s=0;
scanf("%d%d",&n,&m);
s=n+m;
if(s%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
