#include<stdio.h>
int main()
{
    int n,r,i,j,c=0,flag=0,arr[100];
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        arr[c]=r;
        c+=1;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}