/* Program to read two numbers and Calculate Power without using header file.*/

#include<stdio.h>
int main()

{
    float i=1,a,b,res=1;
    printf("Enter base and power \n");
    scanf("%f%f",&a,&b);

    while(i<=b)
    {
        res*=a;
        i=i+1;

    }
    printf("number %f \n",res);
}
