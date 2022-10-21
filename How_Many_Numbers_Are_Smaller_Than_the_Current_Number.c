#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]>arr[j])
                {
                    c+=1;
                }
            }
        }
        printf("%d ",c);
    }
}