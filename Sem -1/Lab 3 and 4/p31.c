/* Program to find sum of all individiual digits of any number N*/

#include<stdio.h>
int main()
{
    int number,q,a;
    int sum=0;

    printf("Enter the number");
    scanf("%d",&number);
    a=number;
    while(number>0)
    {
        
        q=number%10;
        sum=q + sum;
        number=number/10;
    }

    printf("sum of all individiual digit of %d =%d",a,sum);
}