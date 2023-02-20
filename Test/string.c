#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    printf("enter your name : ");
    gets(name);
    puts(name);

    char name2[100];
    strcpy(name2,name);
    puts(name2);

    strlen(name2);
    printf("%d\n",strlen(name2));

    strrev(name);
    puts(name);

    if(strcpy(name2,name)==0)
    {
        printf("ditto");
    }
    else
    {
        printf("not ditto");
    }



}