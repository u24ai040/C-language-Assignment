/* Program to calculate Area of Triangle */

#include<stdio.h>
#include<conio.h>
void main()
{
	float hypoteneous,base,area;

	printf("Enter hypoteneous,base \n");

	scanf("%f%f",&hypoteneous,&base);

	area=base*hypoteneous/2;

	printf("\n area of triangle =%f",area);
	
}

