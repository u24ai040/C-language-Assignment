/*Program to Read a 3*3 Matrix and Print Its Traspose*/

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];

    printf("\n Enter the elements  of matrix a\n");
    
    //Reading Input from user
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
             scanf("%d",&a[i][j]);
      }
        }
    // Print Matrix a
        printf("\n Matrix a is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
        }
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
            b[i][j]=a[j][i];//condition for Transpose Matrix
        }
        }
         printf("\n Transpose of Matrix a ia \n");
         // Printing Transpose of Matrix a
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
        }
}