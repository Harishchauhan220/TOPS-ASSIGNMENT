/* WAP to reverse a string and check that the string is palindrome or not */

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100];
    char s2[100];

    printf("enter the string : ");
    gets(s1);

    strcpy(s2,s1);

    strrev(s1);

    if(strcmp(s1,s2)==0)
    {
        printf("\nyes this is palindrome !!!");
    }
    else
    {
        printf("\nno no no this is not palindrome....!");
    }


}