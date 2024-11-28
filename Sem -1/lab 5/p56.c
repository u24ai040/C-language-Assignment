//  Program to read an Array of 10 Integers and Count total number of Positive and Negative numbers  and Zero's .

#include<stdio.h>
int main()
{
    int a[10],sum=0,count=0,c2=0,c3=0;
    printf("Enter 10 numbers\n");
    // Reading input from user
     for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
      
    }
    printf("\n Your Array is\n");
     // Printing Array
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);   
    }


    for(int i=0;i<10;i++)
    {
        
        if(a[i]>0)
        {
            count=count+1;// Counting Number of Positive numbers
        }
        if(a[i]==0)
        {
            c2=c2+1;
            }
            // Counting Number of zero's  
         if(a[i]<0)
        {
            c3=c3+1;// Counting Number of Negative  numbers

        }
    }
     printf("\nTotal Number of Positive Number in Array is %d\n",count);
    printf("Total Number of zero in Array is %d\n",c2);
    printf("Total Number of Negative Number in Array is %d\n",c3);
    }


        
