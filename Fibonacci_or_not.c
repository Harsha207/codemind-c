#include<stdio.h>
int main()
{
    int n,i,a[100],c=0;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=1;i<100;i++)
    {
        a[i+1]=a[i]+a[i-1];
    }
    for(i=1;i<100;i++)
    {
        if(a[i]==n)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}