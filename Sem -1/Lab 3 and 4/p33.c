/* Program to find Maximum and Minimum Number from N numbers*/

#include<stdio.h>
int main()
{
    int n,max,min,i;
    printf("Enter number of elements");
    scanf("%d",&n);

    printf("Enter the Numbers");
    scanf("%d",&max);
    min=max;
    for(i=2;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
        else if (num<min)
        {
            min=num;
        }
            }
            printf("Maximum Number is %d\n",max);
            printf("Minimum Number is %d\n",min);
}
