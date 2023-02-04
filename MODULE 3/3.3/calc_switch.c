/* WAP of Addition, Subtraction, Multiplication and Division using Switch case.*/

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("select the option what do you want");
    printf("\ntap 1 for Addition");
    printf("\ntap 2 for Substraction");
    printf("\ntap 3 for Multiplication");
    printf("\ntap 4 for Division");
    scanf("\n%d", &c);
    printf("\nenter the value of a = ");
    scanf("\n%d", &a);
    printf("\nenter the value of b = ");
    scanf("\n%d", &b);
    switch (c)
    {
    case 1:
        printf("\nsum is = %d", a + b);
        break;
    case 2:
        printf("\nsubstraction is = %d", a - b);
        break;
    case 3:
        printf("\nmultiplication is = %d", a * b);
        break;
    case 4:
        printf("\ndivision is = %f", (float)a / b);
        break;
    default:
        printf("\ninvalid input !!!");
        break;
    }
}