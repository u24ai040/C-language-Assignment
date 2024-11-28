/* Program to Read a 3*3 Matrix and Add their value and store them in third Matrix*/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];

    printf("\n Enter the elements  of matrix a\n");
    
//Reading Input from user
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
             scanf("%d",&a[i][j]);
      }
        }
// Printing Matrix a
        printf("\n Matrix a is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
        }

        printf("\n Enter the elements  of matrix b\n");
    //Reading Input from user

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
             scanf("%d",&b[i][j]);
      }
        }
// Printing Matrix b
        printf("\n Matrix b is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
        }

        printf("\n Sum of Matrix a and b is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",a[i][j]+b[i][j]);//sum of matrix a and b
         }
         printf("\n");
        }



}