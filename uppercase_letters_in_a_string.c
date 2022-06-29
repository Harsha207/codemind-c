#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100];
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}