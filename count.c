#include<stdio.h>
void main()
{
    char a[100];
    int i,count=0;
    printf("enter the scentence \n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!="")
        {
            count++;
        }
        
    }
    printf("%d",count);
    getch();
}
