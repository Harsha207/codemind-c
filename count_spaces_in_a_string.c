#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==32)
        {
            c++;
        }
    }
    printf("%d",c);
}