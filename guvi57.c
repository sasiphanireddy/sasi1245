#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[30],count=0,i,j;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[j]==k)
{
count++;
}
}
printf("%d",count);
getch();
}
