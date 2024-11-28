/*A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[10];
    int  marks;
};
 int main()
 {
    struct student ai[10];

    for(int i=0;i<4;i++)
    {
        printf("Enter the Student Roll No\n");
        scanf("%d",&ai[i].roll_no);
         printf("Enter the Student Name\n");
        scanf("%s",&ai[i].name);
         printf("Enter the Student Marks\n");
        scanf("%d",&ai[i].marks);

    }
printf("information of students having marks greater than 500\n");
    for(int i=0;i<4 ;i++)
    {
        if(ai[i].marks>500)
        {
        printf("%d \n",ai[i].roll_no);
        printf("%s \n ",ai[i].name);
        printf("%d \n ",ai[i].marks);
        }

    }
 }
