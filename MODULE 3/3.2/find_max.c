//  Write a program to find out the max from given number
#include<stdio.h>
void main (){
    int i,digit,smallest=9,largest=0,number;
    printf("enter any number : ");
    scanf("%d",&number);

    while(number>0){
        digit=number%10;
        if(digit>largest)
        largest=digit;
        if(digit<smallest)
        smallest=digit;
        number=number/10;
    }

    printf("largest is =%d",largest);
    printf("\nsmallest is =%d",smallest);
}