/* Program to check whether a number is Prime or not*/
//A Prime Number is a number that can only be divided by itself and 1 witout remainders.

#include<stdio.h>
int main()
{
    int number,i,reminder;
    printf("Enter the number");
    scanf("%d",&number);
     
    if(number<=1)
    {
        printf("%d is not a Prime number",number);// Numbers which are less then or equal to one are not a prime number.
    }
    else
    {
        for(i=2;i<=(number/2);++i)
        {
            if(number%i==0)
            {
            reminder=0;
            break;
            }
        }
        //reminder is 0 for all composite Number
        if( reminder==0)
        {
            printf("%d is a  Composite number\n",number);
        }
        else
        {
            printf("%d is a Prime number\n",number);
        }
    }

}