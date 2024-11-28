/*Program to make a function to calculate nCr.*/

#include<stdio.h>
int fact(int n);//Function Prototype

int main()
{
    int n,c,w,r;
    printf("Enter the n and r\n ");
    scanf("%d%d",&n,&r);
 w=fact(n)/(fact(n-r)*fact(r));//Calling Function

 printf("%dC%d = %d",n,r,w);

}
int fact(int n)//Function Defination
{int x=1;
    for(int i=1;i<=n;i++)
    {
        x=x*i;
    }
    return x;

}
    
