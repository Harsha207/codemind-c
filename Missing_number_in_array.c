#include<stdio.h>
int main()
{
    int t,p,i,n,to;
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
        scanf("%d",&n);
        int x[100],s=0;
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n-1;i++)
        {
            s+=x[i];
        }
        to=n*(n+1)/2;
        int a;
        a=to-s;
        printf("%d
",a);
    }
}