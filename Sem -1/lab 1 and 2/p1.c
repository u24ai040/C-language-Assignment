/*Program to Calculate Simple Interest*/


#include<stdio.h>
void main ()
{
    int simple_interest,principle,rate_of_interest,no_of_years;

    printf("Enter principle,rate_of_interest,no_of_years");

    scanf("%d%d%d",&principle,&rate_of_interest,&no_of_years);

    simple_interest=principle*rate_of_interest*no_of_years*0.01;

    printf("%d",simple_interest);

}
