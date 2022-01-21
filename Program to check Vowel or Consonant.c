
#include<stdio.h>
int main()
{
    char c,A,E,I,O,U,LC,UC;
    scanf("%c",&c);
    UC=(c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U');
    LC=(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u');
    if(UC ||LC)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}
