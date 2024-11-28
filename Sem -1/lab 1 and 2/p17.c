/* Program to Read three numbers and Print Max using Logical Operater */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
                {
                    printf("maximum number is a= %d",a);
                            }
 if(b>a && b>c)
                 {
                    printf("maximum number is b= %d",b);
                            }

 if(c>a && c>b)
                 {
                    printf("maximum number is c= %d",c);
                            }

}
