#include<stdio.h>
int main()
{
    int n,m,i,j,s=0;
    int arr[100][100];
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}