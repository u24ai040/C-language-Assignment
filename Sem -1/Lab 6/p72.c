/*Program to Rotatean Array by N position*/
#include<stdio.h>
int main()
{
    int m,N,i,j,x;
    
        // reading size of array from user
    printf("Enter the size of array\n");
    scanf("%d",&m);
    int a[m];
//reading element of array
printf("Enter the element of Matrix\n");

    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    
    }

    // printing element of array
    printf("Your matrix is\n");
     for(i=0;i<m;i++)
    {
        printf("%d \t",a[i]);
     }
     //Reading the value of position be rotated
      printf("enter the position to be rotated");
      scanf("%d",&N);
      
// If position is greater than size
      N=N%m;

      for(i=0;i<N;i++)
      {
        x=a[0];//to store first element of array in other variable
        for(j=0;j<m-1;j++)
        {
            a[j]=a[j+1];//all element are rotating other than first element

        }
        a[m-1]=x;
      }
printf("New rotated Matrix is\n");
      for(i=0;i<m;i++)
      {
        printf("%d\t",a[i]);
      }
}

    