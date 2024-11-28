// Program to Reverse an Array

#include<stdio.h>
int main()
{
    int a[10],b[10];

    printf("\n Enter the elements  of matrix a\n");

//Reading Input from user
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
         }

     for(int i=0;i<10;i++)
    {
       printf("%d\t",a[i]);
     }
     for(int i=0;i<10;i++)
     {
        b[i]=a[9-i];
     }
     printf("\nrevese matrix of matrix a\n");
      for(int i=0;i<10;i++)
    {
       printf("%d\t",b[i]);
     }
}
  