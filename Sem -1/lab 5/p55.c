// Program to read an Array of 10 Integers and Count total number of Odd and Even elements


#include<stdio.h>
int main()
{
    int a[10],sum=0,count=0,c2=0;
    // Reading input from user
    printf("Enter 10 numbers\n");
     for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
      
    }
    printf(" Your Array  is ");
    // Printing Array
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);   
    }

    for(int i=0;i<10;i++)
    {
        int flag=0;
        flag=a[i]%2;//if Flag =0 ,then it is even number otherwise it is odd number 
        if(flag==0)
        {
            count=count+1;// Counting Number of Even numbers
        }
        else
        {
            c2=c2+1;// Counting Number of Odd numbers
        }
    }
    
    printf("Total Number of Even Number in Array is %d\n",count);
    printf("Total Number of Odd Number in Array is %d\n",c2);
    }


        
    
