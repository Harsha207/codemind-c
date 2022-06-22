#include<stdio.h>
int main()
{
    int a[10][10];
    int n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i!=1 && i!=n && j!=1 && j!=m)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}