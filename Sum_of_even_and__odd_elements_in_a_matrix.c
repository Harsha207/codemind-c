#include<stdio.h>
int main()
{
    int n,m,i,j,es=0,os=0;
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
            if(arr[i][j]%2==0)
            {
                es=es+arr[i][j];
            }
            else
            {
                os=os+arr[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}