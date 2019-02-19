#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a=0;
scanf("%d%d",&n,&m);
if(n>m)
{
a=n-m;
}
else
{
a=m-n;
}
if(a%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
