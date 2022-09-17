#include<stdio.h>
int main()
{
    int n,a[100],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(0<a[i]-a[i-1])
        {
            s+=a[i]-a[i-1];
        }
    }
    printf("%d",s);
}