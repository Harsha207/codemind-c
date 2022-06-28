#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,d,temp,s=0;
    scanf("%d",&n);
    temp=n;
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,d);
        n=n/10;
        d--;
    }
    if(s==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}