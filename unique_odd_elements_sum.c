#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int arr[100];
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
                arr[i]=2;
            }
        }
        if(arr[i]%2!=0 && arr[i]!=2)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}