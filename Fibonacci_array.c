#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n>=3)
    {
        for(i=0;i<n-2;i++)
        {
            if(arr[i]+arr[i+1]!=arr[i+2])
            {
                c++;
                printf("no");
                break;
            }
        }
        if(c==0)
        {
            printf("yes");
        }
    }
    else
    {
        printf("no");
    }
}