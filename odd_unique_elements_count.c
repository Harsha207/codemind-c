#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0;
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
                arr[j]=2;
            }
        }
        if(arr[i]%2!=0 && arr[i]!=2)
        {
            c++;
        }
    }
    printf("%d",c);
}