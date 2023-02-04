//  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>
void main()
{
    int a[5];
    printf("\nenter array elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("ascending order elements are = ");
    for (int i = 0; i < 5; i++)
    {

        printf("%d", a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\ndecending order elements are = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}
