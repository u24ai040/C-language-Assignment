/*A program to print 1,4,9,16,25...*/

/* Tis program is designed for print first N odd Numbers*/

#include<stdio.h>
int main()
{
    int a=1,N,x=0;
    printf("Enter the number of terms.");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        x=x+2*i-1;
        printf("%d\n",x);
}
}
