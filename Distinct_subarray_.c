#include<stdio.h>
int main()
{
    int a,b,c=0,i,j;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        int s=0;
        for(j=i;j<=b;j++)
        {
            s+=j;
            if(s%2!=0)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}