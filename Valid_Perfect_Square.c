#include<stdio.h>
int main()
{
    int n,i,j,p,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i]/2;j++)
        {
            p=j*j;
        
            if(p==arr[i])
            {
                printf("True
");
                break;
            }
        }
        if(arr[i]!=p)
        {
            printf("False
");
        }
        
    }
}