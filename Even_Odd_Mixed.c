#include<stdio.h>
int main()
{
    int n,e,o,c,r;
    scanf("%d",&n);
    c=0;
    e=0;
    o=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        c++;
        if(r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(c==e)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}