#include<stdio.h>
#include<conio.h>
void main()
{
int n,cout=0,rem=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
cout++;
n=n/10;
}
printf("%d",cout);
getch();
}
