#include <stdio.h>
#include<string.h>

int main()
{
    int n,count=0;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n)
    {
        count++;
        n=n/10;
    }
        printf("%d",count);
    

    return 0;
}
