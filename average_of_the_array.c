#include<stdio.h>
int main()
{
    int n,i,s=0,arr[100];
    scanf("%d",&n);
    float a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    a=(float)s/n;
    printf("%0.2f",a);
}