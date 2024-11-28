/*A program to read a numbers till a negative number is entered and calculate sum of a list of numbers entered.  */

#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter the numbers\n");

    while(1)
    {
        scanf("%d",&number);
        if (number<0)
        {
            break;
        }
        sum=sum +number;
    }
    printf("Sum of the numbers is %d\n",sum);
}