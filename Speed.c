#include<stdio.h>
int main()
{
    int n,i,j,arr[100],t,c;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        c=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                c+=1;
            }
        }
        printf("%d
",c+1);
    }
}