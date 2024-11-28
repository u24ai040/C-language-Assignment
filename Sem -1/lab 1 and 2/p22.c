/* A Program to Calculate Factorial of any number*/

#include<stdio.h>
int main()
{
    int number;
    long factorial =1;
    printf("Enter value of number");
    scanf("%d",&number);
    
    
   if(number<0)
            {
                printf("Factorial of negative doesn't exist \n");
            
            }
    else
        {
            for (int i=1; i<=number ; i++)
          
           {

            factorial=factorial*i;
            }
            printf(" Factorial of %d is %ld \n", number,factorial);

        }        
}
