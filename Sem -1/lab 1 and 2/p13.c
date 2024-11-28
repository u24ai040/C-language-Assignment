/* Program to check Whether Number is even or odd */

#include<stdio.h>

int main()
{
    int num;
    printf("Enter num");
    scanf("%d",&num);

    if (num%2==0)
        {
        printf("%d is even \n ",num);
            }

       else
       {
        printf("%d is odd \n ",num);
             }

    return 0;
}
