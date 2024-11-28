#include<stdio.h>
int main()
{
    int i,j,sum,sub;

for(i=1;i<=4;i++)
    {
         
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=5;i<=7;i++)

    { for(j=1;j<=i-4;j++)
        {
            printf(" ");
        }
        int k;
        if(i==5)
        {
            k=0;
        }
       else if(i==6)
        {
            k=3;
        }
       else if(i==7)
        {
            k=6;     
        }
        
        for (j=1;j<=(i-k);j++)
        {
            printf("*");
        }
    printf("\n");
    }
    
    
}
 