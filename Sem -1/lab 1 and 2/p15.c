/* Program to read marks and  print Division */

/* This program will help to divide students according to their academic progress*/

#include<stdio.h>

int main()
{
     float m1,m2,m3,m4,m5,Total,Percentage;                 /*Here m1=Marks of subject 1
                                                            m2=Marks of subject 2
                                                            m3=Marks of subject 3
                                                            m4=Marks of subject 4
                                                            m5=Marks of subject 5 */

    printf("Enter value of m1,m2,m3,m4,m5,");

    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    Total=m1+m2+m3+m4+m5;

    Percentage= Total*100/500;


    
      if(Percentage>=90 && Percentage<=100)
                         {
                           printf("Division A1"); 
                              }
      if(Percentage>=80 && Percentage<90)
                          {
                            printf("Division A2"); 
                             }
      if(Percentage>=70 && Percentage<80)
                         {
                          printf("Division B1"); 
                                }
      if(Percentage>=60 && Percentage<70)
                         {
                          printf("Division B2"); 
                               }
      if(Percentage>=50 && Percentage<60)
                         {                   
                          printf("Division C1"); 
                                }
      if(Percentage>=40 && Percentage<50)
                         {
                           printf("Division C2"); 
                                   }
      if(Percentage>=30  && Percentage<40)
                         {
                          printf("Division D"); 
                                    }
      if( Percentage<30)
                         {
                           printf(" You are FAIL "); 
                                      }
      return 0;
}