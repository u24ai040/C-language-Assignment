/* Program to read three numbers and print Maximum number  among them.( using if else statement)*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
     {
        if(a>c)
        {
          printf("\n Big is a=%d",a);
         }
    else
         {
          printf("\n Big is c=%d",c);
        }
     }

    else
     {
         if(b>c)
        {
         printf("\n Big is b=%d",b);
         }
     else
        {
        printf("\n Big is c=%d",c);
        }
     }
            
            
}