#include<stdio.h>
int main()
{
    int n,m,i,k,x[100],y[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&y[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(i=0;i<m;i++)
        {
            if(x[i]<=k && y[i]>=k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}