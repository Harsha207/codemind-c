#include<stdio.h>
int main()
{
    int n,i,arr[100];
    int fs=0,ss=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        fs=fs+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        ss=ss+arr[i];
    }
    printf("%d
",fs);
    printf("%d",ss);
}