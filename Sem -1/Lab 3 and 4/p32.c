/* Program to find Maximum and Second Maximum from N numbers*/

#include<stdio.h>
int main()
{
    int n,max,SecondMax,i;
     printf("Enter number of elements");
    scanf("%d",&n);

    printf("Enter the Numbers");
    scanf("%d%d",&max,&SecondMax);
    for(i=2;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        if(num>max)
        {   SecondMax=max;
            max=num;
        }
        else if (num>SecondMax && num<max)
        {
            SecondMax=num;
        }
            }
            printf("Maximum Number is %d\n",max);
            printf("Second Maximum Number is %d\n",SecondMax);
}

