#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
            s=s+i;
            i++;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}