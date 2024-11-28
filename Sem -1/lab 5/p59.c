//  Program to read Two  Array of 10 Integers  and Swap Values of these Arrays

#include<stdio.h>
int main()
{
    int a[10],b[10],temp;

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

     // Swaping values of two matrix
        for(int i=0;i<10;i++)
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }

// Printing New Matrix a
    printf("\n New matrix a is \n");
     for(int i=0;i<10;i++)
    {
       printf("%d \t",a[i]);
     }
// Printing New Matrix b
      printf("\n New matrix b is \n");
         
     for(int i=0;i<10;i++)
    {
       printf("%d \t",b[i]);
     }
}
