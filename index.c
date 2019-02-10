#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the elements in an array  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d-%d \n",a[i],i);
    }   
    getch();
}
