#include<stdio.h>
int main()
{
    int n,i,s=0,arr[100];
    scanf("%d",&n);
    int a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}