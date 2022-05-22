#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int arr[100],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        s=s+arr[i];
    }
    printf("%lld",s);
}