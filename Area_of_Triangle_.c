#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,area;
    scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/2;
    area=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("%.2f",area);
}