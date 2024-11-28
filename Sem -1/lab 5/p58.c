//  Program to read Two  Array of 10 Integers  and store Addition of those arrays into Third array

#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];

    printf("Enter the elements  of matrix a\n");

     // Reading input from user
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
         }
 // Printing Matrix a
     for(int i=0;i<10;i++)
    {
       printf("%d \t",a[i]);
     }

      printf("\nEnter the elements  of matrix b\n");
 // Reading input from user
    for(int i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
         }

          // Printing Matrix b
     for(int i=0;i<10;i++)
    {
       printf("%d \t",b[i]);
     }
        for(int i=0;i<10;i++)
        {
            c[i]=a[i]+b[i];// Addition of arrays elements 
        }
        printf("\n Addition matrix of matrix a and matrix b is\n" );
         for(int i=0;i<10;i++)
    {
       printf("%d \t",c[i]);// Printing third array c
     }
}