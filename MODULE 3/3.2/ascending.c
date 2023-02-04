/*
 WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
*/

#include<stdio.h>
void main (){
    int a[5]={2,6,7,9,1};

    for(int i=0 ; i<5 ; i++)
    {
        for(int j= i+1 ; j<5 ; j++)
        {
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } 
    }

    for (int i=0 ; i<5 ; i++)
    {
        printf("%d",a[i]);
    }
}