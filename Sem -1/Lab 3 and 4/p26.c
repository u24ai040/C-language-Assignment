/* This Program is designed to calculate all even and all odd no between numbers 1 and N(here 1 and N is included)*/

#include<stdio.h>
int main()

{
    int N;
    int i=1;
    int sum_even=0;
    int sum_odd=0;
    printf("Enter value of N");
    scanf("%d",&N);

    while(i<=N)
    {
        if(i%2==0)//when we divide number by 2 and if reminder is zero then it is even number otherwise it is odd number
        {
            sum_even=sum_even+i;
        }
        else
        {
            sum_odd = sum_odd +i;
        }
        i=i+1;
    }
    printf("Sum of Even number coming between 1 and %d = %d\n",N,sum_even);
    printf("Sum of Odd number coming between 1 and %d = %d\n",N,sum_odd);
}    
