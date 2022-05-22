#include<stdio.h>
int main()
{
    int n,m,i,j,arr[100],s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[j]);
            s=s+arr[j];
        }
    }
    printf("%d",s);
}