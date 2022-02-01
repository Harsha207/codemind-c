
#include<stdio.h>
int main()
{
    int n,sum=0,sq,r;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
