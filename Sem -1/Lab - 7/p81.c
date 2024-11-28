/*Function that return 1 if number is prime otherwise return 0*/

#include<stdio.h>
void even(int num);//Function Prototype
void main()
{
    int num,res;
    printf("Enter the Number");
    scanf("%d",&num);

    even(num);//Calling Function
   
}
 void even(int num)//Function Defination
{
int flag,res;
res=num;
for(int i=2;i<=num/2;i++)
{
  
  if( num%i==0)
   {
   flag=1;
   break;
   }
}
if (flag==1)

   {
  
    printf("0");
   }
    else{

     printf("1");
   }
}

