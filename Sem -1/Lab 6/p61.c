/*Program to sort (Bubble Sort) Array*/
#include<stdio.h>
int main()
{
    int N=0;
    printf("Enter numbers Of Elements in matrix\n");
    scanf("%d",&N);

    int a[N];
    printf("Enter the %d Numbers\n",N);
    // Reading input from user
     for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
      
    }
        printf("\nYour Array is\n");
     // Printing Array
    for(int i=0;i<N;i++)
    {
        printf("%d\t",a[i]);   
    }
    
    for(int j=0;j<N;j++)
    {
        for(int i=0;i<N-j;i++)
        {
            if(a[i]>a[i+1])
            {
            a[i]=a[i]+a[i+1];
            a[i+1]=a[i]-a[i+1];
            a[i]=a[i]-a[i+1];
        }
        }
    }
    printf("\n Ascending order of elements in array");
    for(int i=0;i<N;i++)
    {
        printf("\n %d\t",a[i]);
    }
    
    }

