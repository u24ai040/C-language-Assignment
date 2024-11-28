/* Program to check whether a Number is Palindrom or not.*/
/* A Number that remains same even if its digits are reversed is called Palindrom Number*/

#include<stdio.h>
int main()
{
    int number,original,b,c=0;
    printf("Enter the number");
    scanf("%d",&number);
    original=number;

    while(number>0)
    {
        b=number%10;
        c=c*10+b;
        number=number/10;
         
    }
    if(original==c)
    {
        printf("%d is a Palindrom number",original);
    }
    else
    {
        printf("%d is not a Palindrom number",original);
    }
}