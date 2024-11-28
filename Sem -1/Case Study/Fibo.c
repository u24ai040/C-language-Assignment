/*You are given an integer, N. Write a program to determine if N is an element of the Fibonacci Sequence.
The first few elements of fibonacci sequence are 0,1,1,2,3,5,8,13.... A fibonacci sequence is one where every element is a sum
of the previous two elements in the sequence. The first two elements are 0 and 1.*/

#include<stdio.h>

int fibo(int n);
int main()
{   
    int t;
    
    printf("how many numbers you wants to check\n");
    scanf("%d",&t);
    int a[t];
    
    printf("Enter the number which you want to check\n");
    for(int i=0;i<t;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
    fibo(a[i]);
    }

    
}

int fibo(int n)
{
    int a=0,b=1,next;
    while(b<n)
    {
        next=a+b;
        a=b;
        b=next;
    }
    if(b==n)
    {
        printf("%d is a member of fibonaci series\n",n);
    }
    else
        {
            printf("%d is not in fibonaci series\n",n);
        }
}