/*Program to Convert Seconds into Days or Hours or Minutes */

#include<stdio.h>
#include<conio.h>
void main()
{
		long int seconds,days,hours,minutes;
		printf("Enter seconds");
		scanf("%d",&seconds);
	
		minutes=seconds/60;// to convert seconds into minutes
		hours=minutes/60;// to convert minutes into hours
		days=hours/24;// to convert hours into days

		printf("\n minutes=%d",minutes);
		printf("\n hours=%d",hours);
		printf("\n days=%d",days);	
}

