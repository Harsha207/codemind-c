#include<stdio.h>
int main()
{
    int n,i,c=0;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}