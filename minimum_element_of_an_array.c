#include<stdio.h>
int main()
{
    int n,i,s,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=arr[0];
    for(i=0;i<n;i++)
    {
    
        if(arr[i]<s)
        {
           s=arr[i];
         }
    }
    printf("%d",s);
}