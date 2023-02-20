
#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;

    printf("a is : ");
    scanf("%d",&a);

    printf("b is : ");
    scanf("%d",&b);

    printf("c is : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater........!");
        }
        else
        {
            printf("c is greater.........!");
        }
    }

    else
    {
        if(b>c)
        {
            printf("b is greater..........!");
        }
        else
        {
            printf("c is greater..........!");
        }
    }
}