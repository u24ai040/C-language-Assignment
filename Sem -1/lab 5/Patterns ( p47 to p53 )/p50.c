#include<stdio.h>
int main()
{
    int i,j,ascii=0;


    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (i==0)
            {
                ascii=65;
            }
             if (i==1)
            {
                ascii=66;
            }
             if (i==2)
            {
               ascii=67;
            }
             if (i==3)
            {
                ascii=68;
            }
             if (i==4)
            {
                ascii=69;
            }
            printf("%c",ascii);
        }
        printf("\n");
    }
}