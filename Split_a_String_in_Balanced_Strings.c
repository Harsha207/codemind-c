#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,c=0,x=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='L')
        {
            c+=1;
        }
        if(str[i]=='R')
        {
            c-=1;
        }
        if(c==0)
        {
            x+=1;
        }
    }
    printf("%d",x);
}