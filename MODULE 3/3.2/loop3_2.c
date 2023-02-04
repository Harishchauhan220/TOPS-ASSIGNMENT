#include<stdio.h>
void main(){
    int no,even_count=0,odd_count=0,sum_even=0,sum_odd=0,sum=0;
    for(int i=1;i<=10;i++){
        printf("\nenter no :");
        scanf("%d",&no);
        if(no%2==0){

            even_count++;
            sum_even=sum_even+no;

        }
        else{
            odd_count++;
            sum_odd=sum_odd+no;

        }
        sum=sum+0;

    }
    printf("\n count of even no:%d",even_count);
    printf("\n count of odd no:%d",odd_count);
    printf("\n count of even no:%d",sum_even);
    printf("\n count of odd no:%d",sum_odd);
    printf("\n count of all no:%d",sum);
}