// Program to read an Array of 10 Integers and print Sum of Numbers.

#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter  10 numbers\n");

    // Reading Input from user
     for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
       sum=sum+a[i];// Adding each number to the sum
    }
 
        // Printing an Array or Matrix
        printf(" Matrix A is ");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);

        
    }
    printf("Sum of all numbers are in array is %d \n",sum);
}