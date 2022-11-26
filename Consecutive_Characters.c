#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,c=0,c1=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==str[i+1])
        {
            c+=1;
        }
        else
        {
            if(c1<c)
            {
                c1=c;
            }
            c=0;
        }
    }
    if(c1<c)
    {
        c1=c;
    }
    printf("%d",c1+1);
}