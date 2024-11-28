/*Program to read an Array and find out maximum number among them */
#include<stdio.h>
int maximum(int n,int a[]);//Function Prototype

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
   int Max= maximum(n,a);//Calling Function

}
int maximum(int n,int a[])//Function Defination
{
    int Max;
    Max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
        }
    }
   printf("Maximum number is %d\n",Max);

}
