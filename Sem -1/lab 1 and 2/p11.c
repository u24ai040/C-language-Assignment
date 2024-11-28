/* Program to read total seconds and convert it into time . */
#include<stdio.h>

int main()
{
    int t,m,n,h,i,s;
    printf("Enter total seconds \n");
    scanf("%d",&t);

    if (t<60)//Applicable when entered total seconds  is greater than 1 minute
    {
        printf("time is %d seconds \n",t);
    }
    if(t>=3600)// Applicable when entered total seconds is greater than 1 hour
    {
        h=t/3600;
        printf("time is %d hours \n",h);
        i=t -3600*h;
        if(i>=60 && i<3600)//Applicable  when remaining time is convertable in minutes
        {
            m=i/60;
            printf("%d minutes \n",m);
        }
        if ( i<60)//Applicable when remaining time is convertable in seconds
        {
            printf("%d seconds \n",i);
        }
        else
        {
            s=i-60*m;
            printf("%d seconds \n",s);
        }
    }
    if(t<3600 && t>60)// Applicable when entered total seconds is less than 1 hour but greater than 1 minute
    {
        m=t/60;
        s=t-60*m;
        printf("%d minutes \n",m);
        printf("%d sceonds \n",s);
    }
}
