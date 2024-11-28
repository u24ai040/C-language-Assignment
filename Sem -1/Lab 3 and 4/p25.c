/* This Program is designed to print table of any number*/

#include<stdio.h>
int main()
{
    int number;
    int i=1;
    printf("Enter the number");//to read entered number
    scanf("%d",&number);
    printf("Table of %d\n",number);
                 
     while (i<=10)
    {
        printf("%dx%d=%d\n",number,i,i*number);
       i= i+1;
    }
}
