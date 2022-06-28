#include<stdio.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    start:
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    n=s;
    if(s<10)
    {
        printf("%d",s);
    }
    else
    {
        goto start;
    }
}