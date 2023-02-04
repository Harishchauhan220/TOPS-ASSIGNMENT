/*
 Write a program you have to make a summation of first and last Digit. (E.g.,first is =1 & last is =4)
*/

#include<stdio.h>
void main (){
    int no=1562;
    int rem1=no%10;
    int sum;
    printf("last no %d",rem1);
    int rem;
    while (no!=0){

        rem=no%10;
        no=no/10;
    }

    printf("\nfirst no %d",rem);

    sum=rem+rem1;
    printf("\nsum of first and last no is ...%d",sum);

        
}
