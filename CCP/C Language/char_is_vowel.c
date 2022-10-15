#include<stdio.h>
void main()
{
    char a;
    printf("Enter char : ");
    scanf("%c",&a);
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("%c is vowel",a);
    }
    else
    {
        printf("%c is consonant",a);
    }
}
