/*A Program to copy Element of Array to another Array .Order of Elements of
 second array should be opposite of first arrayusing Pointers*/
#include<stdio.h>

int main()
{
    int a[5],b[5],*aptr,i;
    aptr=&a;

    printf("Enter Element of Array");
    for(i=0;i<5;i++)
    {
        scanf("%d",(aptr+i));
    }
    printf(" Array a is\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(aptr+i));
    }
    
    printf("\n New array b is\n");
    for(i=0;i<5;i++)
    {
        b[4-i]=*(aptr+i);
    }
     for(i=0;i<5;i++)
    {
        printf("%d \t",b[i]);
    }

}