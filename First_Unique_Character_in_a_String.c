#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,j,f=0;
    for(i=0;str[i]!=NULL;i++)
    {
        int c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                c+=1;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}