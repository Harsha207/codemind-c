#include<stdio.h>
int main()
{
    int n,i,j,p=0,s=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                p+=a[i][j];
            }
            if((i+j)==(n-1))
            {
                s+=a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",p);
    printf("Secondary Diagonal:%d",s);
}