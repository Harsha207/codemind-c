#include<stdio.h>
int main()
{
    int n,x[100],y[100],c,c1=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(x[i]<=y[j])
            {
                y[j]=0;
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            c1+=1;
        }
    }
    printf("%d",c1);
}