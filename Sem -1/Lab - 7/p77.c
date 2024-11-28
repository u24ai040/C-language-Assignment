/*Program to check whether a number is Palindrom or not using functions*/

#include<stdio.h>
void Palindrom(int num);//Function Prototype

int main()
 {
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
     Palindrom(num);//Calling Function
 }
void Palindrom(int num)//Function Defination
{
    int x=0,q;
    int a;
    a=num;
    while(num>0)
    {
        q=num%10;
        x=x*10+q;
        num=num/10;
    }
if(x==a)
    {
        printf("%d is Palindrom number",a);
    }
else
    {
         printf("%d is not Palindrom number",a);
    }
}
