#include<stdio.h>
#include<conio.h>
void main()
{
int n,sa=0;
clrscr();
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else if(n%2!=0)
{
sa=n-1;
printf("%d",sa);
}
getch();
}
