#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}