#include<stdio.h>
int main()
{
    int n,x[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>(n/2)-1;i--)
    {
        printf("%d ",x[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        printf("%d ",x[i]);
    }
}