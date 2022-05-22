#include<stdio.h>
int main()
{
    int a,b,i,j,n,x[100],y[100],s=0;
    scanf("%d",&a);
    b=a;
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<b;j++)
    {
        scanf("%d",&y[j]);
    }
    for(i=0,j=0;i<a,j<b;i++,j++)
    {
            s=0;
            s+=x[i]+y[j];
            printf("%d ",s);
        
    }
    
}