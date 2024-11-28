/* This Program is designed to do basic mathematical operations like addition,substraction,multiplcation,division*/

#include<stdio.h>
int main()

{
    float a,b,sum,sub,multi,div;
    int x;
    printf("Enter a and b \n");
    scanf("%f%f",&a,&b);
    printf("Enter 1 to perform addition \n");
     printf("Enter 2 to perform substraction \n");
     printf("Enter 3 to perform multiplication \n");
    printf("Enter 4 to perform division \n");
    scanf("%d",&x);
    switch(x)
    {
        case 1://User wants to do addition
                
                sum=a+b;
                printf("sum a+b = %f\n",sum);
                break; 
         case 2://User wants to do substraction
                sub=a-b;
                printf("sub a-b = %f\n",sub);
                break; 
        case 3://User wants to do multiplication
                
                multi=a*b;
                printf("multi a*b = %f\n",multi);
                break; 
        case 4://User wants to do division
                
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


