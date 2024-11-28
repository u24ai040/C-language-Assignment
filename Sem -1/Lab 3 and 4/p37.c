/* Tis program is designed for print first N even Numbers*/

#include<stdio.h>
int main()
{
    int a=2,N,x;
    printf("Enter the number of terms.");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        x=2*i;
        printf("%d\n",x);
        
        
    }
}