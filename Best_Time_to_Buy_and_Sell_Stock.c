#include<stdio.h>
int main()
{
    int n,a[100],s=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(s<a[j]-a[i])
            {
                s=a[j]-a[i];
            }
        }
    }
    printf("%d",s);
}