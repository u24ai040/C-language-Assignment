/* Program to Calculate Total marks of students  and Percentage */


#include<stdio.h>

int main()
{
     float m1,m2,m3,m4,m5,Total,Percentage;                 /*Here m1=Marks of subject 1
                                                            m2=Marks of subject 2
                                                            m3=Marks of subject 3
                                                            m4=Marks of subject 4
                                                            m5=Marks of subject 5 */

    printf("Enter marks of five subjects");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);//to read marks of 5 subject which is out of 100 

    if (m1>100 || m2>100 || m3>100 || m4>100 || m5>100 )  /* if any marks is greater than 100 then it is invalid*/
    {
        printf("Entered marks are invalid\n" );
        printf(" Marks must be between 0 and 100\n");
    }
     else
         {
            Total=m1+m2+m3+m4+m5;

            Percentage= Total*100/500;

            printf("Total = %f \n",Total);
            printf("Percentage = %f \n",Percentage);

        }
    
}