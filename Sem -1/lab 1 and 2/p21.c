/*Program to read two numbers and perform specific task  and this perform using switch case*/ 

#include<stdio.h>
int main()

{
    float a,b,sum,sub,multi,div;
    char x ;
    
    printf("Enter a and b \n");
    scanf("%f%f",&a,&b);
    printf("Enter + to perform addition \n");
     printf("Enter - to perform substraction \n");
     printf("Enter * to perform multiplication \n");
    printf("Enter / to perform division \n");
    scanf("%c",&x);
    scanf("%c",&x);
    switch(x)
    {
        case '+'://User wants to do addition
                sum=a+b;
                printf("sum a+b = %f\n",sum);
                break; 
         case '-'://User wants to do substraction
                sub=a-b;
                printf("sub a-b = %f\n",sub);
                break; 
        case '*'://User wants to do multiplication
                multi=a*b;
                printf("multi a*b = %f\n",multi);
                break; 
         case '/'://User wants to do division
                if(b==0)
                {
                    printf("division a/b is not possible.");
                
                }
                else
                {
                div=a/b;
                printf("div a/b = %f\n",div);
                break; 
            }
    }
    
}



