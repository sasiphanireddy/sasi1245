#include<stdio.h>
#include<conio.h>
void main()
{
int n,su=0,rem=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
su=su+rem;
n=n/10;
}
printf("%d",su);
getch();
}
