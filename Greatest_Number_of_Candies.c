#include<stdio.h>
int main()
{
    int n,arr[100],m,k,i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        m=0;
        m=arr[i]+k;
        if(m>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}