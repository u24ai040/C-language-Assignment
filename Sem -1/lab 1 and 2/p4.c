/* Program to convert Temperature from Fahrenheit to Centigrade Degrees*/

#include<stdio.h>
int main()
    {
        /* Here  c = Temperature in Centigrade Degree,
                 f = Temperature in Fahrenheit*/
           
        float c,f;
        
        printf("Enter value of c");
        scanf("%d",&c);

        f=(c+32)*9/5;// Relation between Centigrade degree and Fahrenheit
        
        printf("f is %f \n",f);

    }

