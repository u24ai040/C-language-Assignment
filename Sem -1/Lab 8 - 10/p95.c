/*A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include<stdio.h>
#include<string.h>
 struct employee//Declaration of Structure
 {
    int number;
    char name[50];
    int  pay;
 };
 int main()
 {
    int n;
    printf("Enter the No of Employee (Maximum 50)");
    scanf("%d",&n);
    if(n>50)
    {
        printf("It is greater than 50.\n please enter below 50");
    
    }
    else{
    struct employee arr[50];
    struct employee *ptr;
    ptr=arr;
    for(int i=0;i<n;i++)
    {
        printf("Enter the Employee number\n");
        scanf("%d",&ptr->number);
        printf("Enter the Employee Name\n");
        scanf("%s",ptr->name);
        printf("Enter the Employee pay\n");
        scanf("%d",&ptr->pay);
        ptr++;
    }
    ptr=arr;
     for(int i=0;i<n;i++)
    {
        printf("Employee number : %d\n",ptr->number);
     
        printf(" Employee Name : %s\n",ptr->name);
      
       
        printf(" Employee pay : %d\n",ptr->pay);
       ptr++;
    }
    }
    
 }