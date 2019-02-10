#include<stdio.h>
void main()
{
    char a[100];
    int i,count=0;
    printf("enter the scentence \n");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            count++;
            if(a[i+1]>='a'&&a[i+1]<='z')
            {
                count++;
            }
        }
        
    }
    printf("%d",count);
    getch();
}
