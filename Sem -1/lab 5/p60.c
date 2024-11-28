/*Program to sort  (Selection sort) an Array*/
#include<stdio.h>
int main()
{
    int N,i,j,min,temp;
    printf("Enter the number of elements in array");
    scanf("%d",&N);

    int a[N];
printf("Enter the element of an array");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<N-1;i++)
    {
        min=i;
        for(j=i+1;j<N;j++)
        {
           if( a[j]<a[min])
           {
            min=j;
           }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Sorted ( Ascending Order of element ) Array is\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}