#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[20];
    int marks;
};

void main()
{
    FILE *fptr;
    struct student s;
    int n,i;

     fptr=fopen("LNMIITSSTUDENT.JAVA","w");//It will check if this file already created or not .if it is not created then it will create it
     printf("Enter the number of students\n");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
        printf("Enter the details of student %d : \n",i+1);
        printf("Roll no : ");
        scanf("%d",&s.roll_no);
         printf("Student Name : ");
        scanf("%s",s.name);
          printf("Total marks of Student: ");
          scanf("%d",&s.marks);
            //printing data in file
          fprintf(fptr,"Roll no :%d\nStudent Name :%s\nTotal marks of Student:%d\n\n",s.roll_no,s.name,s.marks);
     }
     fclose(fptr);
}