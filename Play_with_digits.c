#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i])
        {
            s+=arr[i]%10;
            arr[i]/=10;
        }
    }
    printf("%d",s);
}