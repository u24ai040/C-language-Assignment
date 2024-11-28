/* A program to designed to print 0/0! +1/1! +2/2! +3/3! ...N */

#include<stdio.h>
int main()
{
    int n,p=1,i=0,q;
     printf("Enter the number of terms");
    scanf("%d",&n);
    int a;

while (i>=0 && i<n)
{
     a=factorial(i);

    printf("%d/%d + ",i,a);
    i++;
    while(i==n)
    {
        a=factorial(i);

    printf("%d/%d",i,a);
    i++;
    }
}

}

int factorial(int m)
{
    int i,fact=1;
    for(i=1;i<=m;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}