#include<stdio.h>
#include<conio.h>
void main()
{
int as,i;
scanf("%d",&as);
for(i=as;i<100;i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
getch();
}
