#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int u=0,d=0,l=0,r=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='U')
        {
            u+=1;
        }
        else if(str[i]=='D')
        {
            d+=1;
        }
        else if(str[i]=='L')
        {
            l+=1;
        }
        else
        {
            r+=1;
        }
    }
    if(u==d && l==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}