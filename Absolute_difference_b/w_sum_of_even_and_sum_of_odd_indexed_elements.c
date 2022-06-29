#include<stdio.h>
int main()
{
    int n,i,arr[100];
    int es=0,os=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+arr[i];
        }
        else
        {
            os=os+arr[i];
        }
    }
    d=es-os;
    printf("%d",d);
}