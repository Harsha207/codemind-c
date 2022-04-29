
#include<stdio.h>
int main()
{
    int num,r,sum=0,product=1;
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        product=product*r;
        num=num/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
