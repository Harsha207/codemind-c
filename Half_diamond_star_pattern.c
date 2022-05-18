#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
}