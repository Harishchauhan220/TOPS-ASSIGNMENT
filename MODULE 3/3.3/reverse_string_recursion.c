// WAP to find reverse of string using recursion
#include <stdio.h>
void reverse(char a[], int i)
{
    if (a[i] == '\0')
        return;
    reverse(a, i + 1);
    printf("%c", a[i]);
}
void main()
{
    char str[100];
    printf(" enter your string = ");
    fgets(str, 50, stdin);
    printf(" your reverse string is = ");
    reverse(str, 0);
}