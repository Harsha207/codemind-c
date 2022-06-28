#include<stdio.h>
int main()
{
    int n,i,s=0;
    int arr[100];
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