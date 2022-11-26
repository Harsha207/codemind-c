#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int n,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            n=str[i]-48;
            if(n%2!=0)
            {
                printf("%d",n*n);
            }
        }
    }
}