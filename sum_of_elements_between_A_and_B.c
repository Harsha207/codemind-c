#include<stdio.h>
int main()
{
    int n,a,b,arr[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}