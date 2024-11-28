/* Program to find reverse number of given number*/

#include<stdio.h>
int main()
{
    int number,original,i,b,c=0;
    printf("Enter the number");
    scanf("%d",&number);
    original=number;

    while(number>0)
    {
        b=number%10;
        c=c*10+b;
        number=number/10;
         
    }
printf("%d is reverse of %d",c,original);
}
