/* Program to to read time in Hours,Minutes and Seconds and Convert it into Total Seconds.*/

#include<stdio.h>

int main()

{
    int Hours,Minutes,Seconds,Total_Seconds;

    printf("Enter value of Hours,Minutes,Seconds");
    
    scanf("%d%d%d",&Hours,&Minutes,&Seconds);

    Total_Seconds= Hours*3600 + Minutes*60 + Seconds;

    printf("\n Total_Seconds is %d", Total_Seconds);

}