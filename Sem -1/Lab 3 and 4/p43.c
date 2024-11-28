/*A Program to Calculate commission for a sales representative as per the sales amount given.a commision is decided by given data*/

#include<stdio.h>
int main()
{
    float sales,com,x;
    printf("Enter value of sales");
    scanf("%f",&sales);
     
     
     
     if(sales<=500)
             {
             com=5*sales/100; 
             printf("Commission is %f \n",com);}
             
     else if(sales>500 && sales<=2000)
           { x=sales-500;
           com=(35)+(x*0.10);
            
             printf("Commission is  %f\n",com);
             }

     else if(sales>2000 && sales<=5000)
            {x=sales - 2000;
            com=185 +(x*0.12);
             printf("Commission is %f\n",com);
             }
             
     else   {com=sales*0.125;
            printf(" Commission is %f\n",com);
            }
     
}


