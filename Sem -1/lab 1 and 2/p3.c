/*Program to Calculate Goss Salary*/

#include<stdio.h>
void main()
{
	int Gross_Salary,Basic_Salary,HRA,Other_Allowances;

	printf("Enter Basic_Salary,HRA,Other_Allowances ");
	
	scanf("%d%d%d",&Basic_Salary,&HRA,&Other_Allowances);
	
	Gross_Salary = Basic_Salary + HRA + Other_Allowances;
	
	printf("Gross_Salary =%d",Gross_Salary);
}
