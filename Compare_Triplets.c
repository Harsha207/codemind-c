#include<stdio.h>
int main()
{
    int x[3],y[3],a=0,b=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<3;i++)
    {
        if(x[i]>y[i])
        {
            a+=1;
        }
        else if(x[i]<y[i])
        {
            b+=1;
        }
    }
    printf("%d %d",a,b);
}