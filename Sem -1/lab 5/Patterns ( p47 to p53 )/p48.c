
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
                printf("1");
            }
             else if(sum==7)
            {
                printf("2");
            }
            else if(sum==8)
            {
                printf("3");
            }
            else if(sum==9)
            {
                printf("4");
            }
            else if(sum==10)
            {
                printf("5");
            }
            else{
                printf(" ");
                }
        }
        printf("\n");
    }
    
}