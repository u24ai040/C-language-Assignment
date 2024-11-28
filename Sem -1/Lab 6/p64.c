/* Program to Read a 3*3 Matrix and Print Sum of all Rows*/
#include<stdio.h>
int main()
{
    int a[3][3],sum=0;

    printf("\n Enter the elements  of matrix a\n");
    
  //Reading Input from user
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
             scanf("%d",&a[i][j]);
      }
        }
    // Print Matrix A 
        printf("\n Matrix a is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
        }
         
         // Finding sum of all rows
         for(int i=0;i<3;i++)
            {
            if(i==0)
            {
                sum=a[0][0]+a[0][1]+a[0][2];
                printf("Sum of first row is %d\n ",sum);
            }
            if(i==1)
            {
                sum=a[1][0]+a[1][1]+a[1][2];
                printf("Sum of second row is %d\n",sum);
            }
            if(i==2)
            {
                sum=a[2][0]+a[2][1]+a[2][2];
                printf(" Sum of third row is %d\n",sum);
            }
}

       
}

