/*
 WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
*/
#include<stdio.h>
int main (){
    int i,b;
    int a=64728;

    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
}