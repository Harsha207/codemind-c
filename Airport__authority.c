#include<stdio.h>
int main()
{
    int n,t,arr[100],i,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            b=b+1;
        }
        else
        {
            b=b+2;
        }
    }
    printf("%d
",b);
    
}