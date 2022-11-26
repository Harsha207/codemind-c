#include<stdio.h>
int main()
{
    int n,x[100],c=0,i,j,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=i;j<n;j++)
        {
            s+=x[j];
            if(s==k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}