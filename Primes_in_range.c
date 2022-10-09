#include<stdio.h>
int n;
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int i,a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i)==1)
        {
            c+=1;
        }
    }
    printf("%d",c);
}