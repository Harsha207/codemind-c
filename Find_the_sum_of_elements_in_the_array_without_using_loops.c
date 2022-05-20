#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    s:
    if(i<n)
    {
        s=s+arr[i];
        i++;
        goto s;
    }
    printf("%d",s);
}