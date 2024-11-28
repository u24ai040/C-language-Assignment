/* Program to read Three numbers and print maximum among them using conditional(? :) Operater*/

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max number is %d",max);

}