#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    int i,z=0,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,ni=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            z++;
        }
        else if(arr[i]==1)
        {
            o++;
        }
        else if(arr[i]==2)
        {
            t++;
        }
        else if(arr[i]==3)
        {
            th++;
        }
        else if(arr[i]==4)
        {
            f++;
        }
        else if(arr[i]==5)
        {
            fi++;
        }
        else if(arr[i]==6)
        {
            s++;
        }
        else if(arr[i]==7)
        {
            se++;
        }
        else if(arr[i]==8)
        {
            e++;
        }
        else if(arr[i]==9)
        {
            ni++;
        }
    }
    if(z>1)
    {
        printf("0");
    }
    else if(o>1)
    {
        printf("1");
    }
    else if(t>1)
    {
        printf("2");
    }
    else if(th>1)
    {
        printf("3");
    }
    else if(f>1)
    {
        printf("4");
    }
    else if(fi>1)
    {
        printf("5");
    }
    else if(s>1)
    {
        printf("6");
    }
    else if(se>1)
    {
        printf("7");
    }
    else if(e>1)
    {
        printf("8");
    }
    else
    {
        printf("9");
    }
}