#include<stdio.h>
void main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("even number : ");

    for(int i=0; i<=n ; i++)
    {
        if(i%2==0)
        {
       printf("%d\n", i);
    }   
    }
    printf("\nodd numbers=");
    for (int i = 1; i <=n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }

    }
 
} 
