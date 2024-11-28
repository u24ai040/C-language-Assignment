/* Program to Swap two variables without using third variable*/

#include<stdio.h>

void main()

{
	int a,b;
	printf("Enter a,b");
	scanf("%d%d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\n a=%d",a);
	printf("\n b=%d",b);
}
