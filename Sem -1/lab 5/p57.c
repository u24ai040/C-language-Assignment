//Program to read array of N elements and Find out Maximum and Second Maximum numbers from elements of array

#include<stdio.h>
int main()
{
    int N=2,a[N],max,Secondmax;
    printf("Enter numbers Of Elements in matrix\n");
    scanf("%d",&N);

    printf("Enter the %d Numbers\n",N);
    // Reading input from user
     for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
      
    }
        printf("\n Your Array is\n");
     // Printing Array
    for(int i=0;i<N;i++)
    {
        printf("%d\t",a[i]);   
    }
    max=a[0];
    Secondmax=max;


     for(int i=0;i<N;i++)
    {
        if(a[i]>max)
        {   Secondmax=max;
            max=a[i];
        }
        else if (a[i]>Secondmax && a[i]<max)
        {
            Secondmax=a[i];
        }
            }
            printf("\nMaximum Number is %d\n",max);
            printf("Second Maximum Number is %d\n",Secondmax);
}
