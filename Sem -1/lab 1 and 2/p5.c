/* Program to Swap Two variables using third variable */

#include<stdio.h>

void main()
{
	int a,b,c;
	printf("Enter a,b \n");
	scanf("%d%d",&a,&b);

	c=a;
	a=b;
	b=c;

	printf("\n a=%d",a);
	printf("\n b=%d",b);
}


