#include<stdio.h>
int main()
{
    int i,j,sum,sub;
    

    for(i=1;i<5;i++)
    {
         sub=j-i;
        for(j=1;j<5;j++)
        {
            sum=i+j;
           
             if(sum==4 ||sum==3 || sum==2)
            {
                printf(" ");
            }
            if(sum==5)
            {
                printf("1");
            }
             if(sum==6)
            {
                printf("2");
            }
             if(sum==7)
            {
                printf("3");
            }
             if(sum==8)
            {
                printf("4");
            }
        }
        for(j=5;j<=7;j++)
        {
            sub=j-i;
        if(sub==3)
        {
            printf("1");
        }
         else if(sub==2)
         {
        printf("2");
         }
        else if(sub==1)
        {
            printf("3");
        }
       
        
    }
     printf("\n");
}
}