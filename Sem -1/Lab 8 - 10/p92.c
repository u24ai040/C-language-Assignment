/* A Program using pointers to find the biggest of given list of N integers*/

#include<stdio.h>
int main()
{
    int n,i;
    printf("How many numbers are in your list?\n");
    scanf("%d",&n);
    int a[n];
    int *ptr;
    ptr=&a;

    printf("Enter the %d numbers\n",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr + i));
    }

    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr + i));
    }

    int big;
    int *bptr;
    bptr=&a;

    for(i=0;i<n;i++)
    {
        if(*bptr<*(ptr+i))
        {
            bptr=ptr+i;
        }
    }
    printf("Biggest number in the is %d\n",*bptr);
}