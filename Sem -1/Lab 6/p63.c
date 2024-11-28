/*Program to Read a 3*3 Matrix and Find out Max and Min Element*/

#include<stdio.h>
int main()
{
    int a[3][3],max,min;

    printf("\n Enter the elements  of matrix a\n");
    
    //Reading Input from user
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
             scanf("%d",&a[i][j]);
              }
        }

          max=a[0][0];
                 min=max;
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

        // Finding Maximum and Minimum Number 
         for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             if(a[i][j]>max)
             {
                max=a[i][j];
             }
             if(a[i][j]<min)
             {
                a[i][j]=min;
             }

         }
        }
        printf("\nMaximum Number is %d\n",max);
         printf("Minimum Number is %d\n",min);
}

         


  