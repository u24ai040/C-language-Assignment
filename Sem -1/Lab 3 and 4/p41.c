/* A program to print Factor of number N*/

#include<stdio.h>
int main()
{
    int N,i,rem;
    printf("Enter the Number");
    scanf("%d",&N);

    printf("Factors of %d\n",N);

    for(i=1;i<=N;i++)
    {
       if( N%i==0 )
       {
         printf("%d\n",i);
        }
    }
}
