/*You are given a number N, you need to print the number of positions where digits exactly divides N.*/

#include<stdio.h>

int main()
{
    int n,q,r,i=0,N,count;
    printf("Enter the number");
    scanf("%d",&n);
    N=n;
   while(n>0)
   {
    q=n%10;
    
    if(q!=0 && N%q==0)//when q=0 we will not counting it.
    {
        count=count +1;
    }
    n=n/10;
   i++;
   }
   printf("%d",count);

}