/* Program to Perform Linear Search on Array*/

#include<stdio.h>
int main()
{
    int m=0,n=0,num,s_ele,flag=0;
  
    printf("Enter the m and n\n");
    scanf("%d%d",&m,&n);
  int a[m][n];
    printf("\n Enter the elements  of matrix a\n");
    
//Reading Input from user
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            
             scanf("%d",&a[i][j]);
      }
        }
// Printing Matrix a
        printf("\n Matrix a is\n");
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
        }
// Reading Number from user
        printf("Enter the number which you want to check if it is in matrix or not\n");
        scanf("%d",&num);



         for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num==a[i][j])
            {
                flag=1;//if number is found in array then flag=1
                break;
            }
      }
        }
         if(flag==1)
        {
            printf("%d is in array\n",num);
            
        }

         if(flag==0)
        {
            printf("%d is not in array\n",num);
            
        }

}