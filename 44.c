#include <stdio.h>
#include<string.h>

int main()
{
    int n,count;
    printf("enter the number \n");
    scanf("%d",&n);
    if(n>=1 && n<=10)
    {
        count=1;
    }
    if(count==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
