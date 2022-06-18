#include<stdio.h>
int main()
{
    int n,i,k,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        s=s+arr[i];
    }
    printf("%d",s);
}