#include<stdio.h>
int main()
{
    int n,i,j,m,s=0;
    int mat[10][10];
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||j==1||i==n||j==m)
            {
                s=s+mat[i][j];
            }
        }
    }
    printf("%d",s);
}