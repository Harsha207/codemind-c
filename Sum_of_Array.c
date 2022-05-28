#include<stdio.h>
int main()
{
    int n,i,s=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("%d",s);
}