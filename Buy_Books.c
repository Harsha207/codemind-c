#include<stdio.h>
int main()
{
    int n,a[100],b[100],s1=0,s2=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s1+=a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        s2+=b[i];
    }
    if(s2-s1<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",s2-s1);
    }
}