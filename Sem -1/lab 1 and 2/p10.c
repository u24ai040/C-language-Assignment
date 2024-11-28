/* Program to Calculate the cut off mark of a student. */

#include<stdio.h>

void main()

{
	int cm,m,c,p,e;        /* Here cm= Cut of marks, 
							m = Marks in Mathematics out of 200
							c = Marks in Chemistry out of 200
							p = Marks in Physics out of 200
							e = Marks in Entrance examination out of 100 */

	printf("Enter m,c,p,e");

	scanf("%d%d%d%d",&m,&c,&p,&e);

	if(m>200 || p>200 || c>200 || e>100)
			{
		printf("Entered marks is invalid \n");
			}
	else
		{
	cm=m*0.5+p*0.5+c*0.5+e;// Calculating cutoff marks by given formula 

	printf("\n cm=%d",cm);
		}
}
