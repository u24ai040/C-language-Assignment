#include<stdio.h>
int main()

{
    int roll[10],s1[10],s2[10],s3[10],total[10],Total,max1,max2,max3,r1,r2,r3,r4,max4;
    
    
//Reading input from user
    for(int i=0;i<10;i++)
    {
        printf("\nEnter the next roll number of student and enter the marks of subject 1,subject 2, and subject 3\n");
        scanf("%d%d%d%d",&roll[i],&s1[i],&s2[i],&s3[i]);
 }

 //Printing Table of Student's Roll no and thier marks in each Subject  
    printf("\nRoll No \t Subject 1 \tSubject 2 \tSubject 3\n");
    for(int i=0;i<10;i++)
    {
          printf("%d       \t%d       \t%d         \t%d     \t\n",roll[i],s1[i],s2[i],s3[i]);
        printf("\n");
    }
    //To Count the Total marks of each Student 
    for(int i=0;i<10;i++)
    {
        total[i]=s1[i]+s2[i]+s3[i];
        Total=total[i];
         printf("\nTotal marks of student having roll no %d is %d\n",roll[i],Total);
    }
     
     max1=0;
     //To Find which student have maximum marks in subject 1
  for(int i=0;i<10;i++)
  {
    
    if(s1[i]>max1)
    {
        max1=s1[i];
        r1=roll[i];
    }
     else
    {
        max1=max1;
    }

  }
  max2=0;
  //To Find which student have maximum marks in subject 2
   for(int i=0;i<10;i++)
  {
    max2=0;
    if(s2[i]>max2)
    {
        max2=s2[i];
        r2=roll[i];
    }
     else
    {
        max2=max2;
    }

  }
   max3=0;
   //To Find which student have maximum marks in subject 3
   for(int i=0;i<10;i++)
  {
    if(s3[i]>max3)
    {
        max3=s3[i];
        r3=roll[i];
    }
     else
    {
        max3=max3;
    }

  }
  max4=0;
  //To Find which student have maximum Total
   for(int i=0;i<10;i++)
  {
    if(total[i]>max4)
    {
        max4=total[i];
        r4=roll[i];
    }
    else
    {
        max4=max4;
    }

  }

   printf("\nRoll no of student having Highest Total  is %d and marks is%d \n",r4,max4);

  printf("Roll no of student having Highest in marks in subject 1 is %d and marks is%d \n",r1,max1);

    printf("Roll no of student having Highest in marks in subject 2 is %d and marks is%d \n",r2,max2);
    
      printf("Roll no of student having Highest in marks in subject 3 is %d and marks is%d \n",r3,max3);
}