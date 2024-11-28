/* Program that interchange the value of two number using function*/
#include<stdio.h>
int swap(int A,int B);//Function Prototype

int main()
{
    int A,B;
    printf("Enter the A and B\n");
    scanf("%d%d",&A,&B);
 swap(A,B);//Calling Function
 
}
int swap(int A,int B)//Function Defination
{
    int temp;
    temp=B;
    B=A;
    A=temp;
    printf("A=%d and B=%d",A,B);
}
