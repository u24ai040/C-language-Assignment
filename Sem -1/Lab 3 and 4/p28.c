/*Program to check whether number is Armstrong or not .*/
/* Armstrong Number is a number that is equal  to the sum of cubes of its digits.*/

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
        sum=q*q*q + sum;
        number=number/10;
    }

    if(a==sum)
    {
        printf("%d is Armstrong Number",a);
    }
    else
    {
        printf("%d is not Armstrong Number",a);
    }
    return 0;
}