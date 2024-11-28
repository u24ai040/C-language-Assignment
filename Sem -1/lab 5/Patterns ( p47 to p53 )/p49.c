
#include<stdio.h>
int main()
{
    int i,j,sum;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            sum=i+j;
            if(sum==6)
            {
                printf("*");
            }
              if(sum==7)
            {
                printf("*");
            }
             if(sum==8)
            {
                printf("*");
            }
            if(sum==9)
            {
                printf("*");
            }
             if(sum==10)
            {
                printf("*");
            }
            else{
                printf(" ");
                }
        }
        printf("\n");
    }
    
}