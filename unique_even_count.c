#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=1;
            }
        }
        if(arr[i]%2==0 && arr[i]!=1)
        {
            c++;
        }
    
    }
    printf("%d",c);
}