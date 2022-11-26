#include<stdio.h>
int main()
{
    int n,i,x[100],t,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(x[i]==t)
        {
            printf("%d ",i);
            f=1;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(x[i]==t)
        {
            printf("%d",i);
            break;
        }
    }
    if(f==0)
    {
        printf("-1 -1");
    }
}