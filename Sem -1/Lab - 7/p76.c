/*Program to check whether number is even or odd using function*/

#include<stdio.h>
void even(int num);//Function Prototype

int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
 even(num);//Calling Function
}

void even(int num)//Function Defination
{
    if(num%2==0)
    {
        printf(" Number is even");
    }
    else
    {
        printf(" Number is odd");
    }
}
