#include<stdio.h>
int main()
{
    int i,j,ascii=0;


    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0)
            {
                ascii=65;
            }
             if (j==1)
            {
                ascii=66;
            }
             if (j==2)
            {
               ascii=67;
            }
             if (j==3)
            {
                ascii=68;
            }
             if (j==4)
            {
                ascii=69;
            }
            printf("%c",ascii);
        }
        printf("\n");
    }
}