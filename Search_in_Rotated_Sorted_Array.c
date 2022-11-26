#include<stdio.h>
int main()
{
    int n,f=0,x[100],t,i;
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
            printf("%d",i);
            f=1;
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}