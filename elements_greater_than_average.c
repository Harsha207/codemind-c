#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0,c=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a)
        {
            c++;
        }
    }
    printf("%d",c);
}