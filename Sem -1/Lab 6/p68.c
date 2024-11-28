/* Program to Read a 3*3 Matrix and Multiply their value and store them in third Matrix*/

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],sum[3][3];

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

        //To initialize matrix sum[i][j]
           for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=0;
        }
    }


        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    
                    sum[i][j]=sum[i][j]+a[i][k]*b[k][j];
                }
            }
        }
printf("Multiplication of matrix a and b");
         for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",sum[i][j]);
         }
         printf("\n");
        }
}
