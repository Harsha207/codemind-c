#include<stdio.h>
int main()
{
    int n,i,arr[100],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    printf("%d",l);
}