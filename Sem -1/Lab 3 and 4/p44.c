/* This program is designed for an electric distribution company charges its domestic consumers as given data*/
#include<stdio.h>
int main()
{
    float c,rate,x;
    printf("c=Consumption in unit\n");
    printf("Here Rate of Charge is in rupees\n");
    printf("Enter value of c\n");
    scanf("%f",&c);
     
     
     
     if(c>0 && c<=200)
             {
             rate=0.50*c ;
             printf("Rate for Charge is %f \n",rate);
             }
             
     else if(c>201 && c<=400)
           { x=c-200;
            rate=(100)+(x*0.65);
            
             printf("Rate for Charge is  %f\n",rate);
             }

     else if(c>410 && c<=600)
            {x=c- 2000;
            rate=230 +(x*0.80);
             printf("Rate for Charge is %f\n",rate);
             }
             
     else   {
            x=c-600;
            rate=(425)+(125*x);
            printf(" Rate for Charge is %f\n",rate);
            }
     
}



