#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='.')
        {
            printf("[%c]",str[i]);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}