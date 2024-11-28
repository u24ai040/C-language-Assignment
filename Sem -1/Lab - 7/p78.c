/*Program to check whether number is Armstrong or not using function*/

#include<stdio.h>
void Armstrong(int num);//Function Prototype

int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
      Armstrong(num);//Calling Function
 
}

void Armstrong(int num)//Function Defination
{
   int sum=0,a,q;
    a=num;
    while(num>0)
    {  
        q=num%10;
        sum=q*q*q + sum;
        num=num/10;
    }

    if(a==sum)
    {
        printf("%d is Armstrong Number",a);
    }
    else
    {
        printf("%d is not Armstrong Number",a);
    }

}
