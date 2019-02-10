#include<stdio.h>
void main()
{
    int i,n,a[100],max;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the elements in an array  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    getch();
}
