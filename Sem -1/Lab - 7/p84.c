/* Program to display the information of book*/
#include<stdio.h>
void book();//Function Prototype
int main()
{
    book();//Calling Function
}

void book()//Function Defination
{
    char book[100];
    char author[100];
    int price,year;

    printf("Enter the Name of Book\n");
    gets(book);

     printf("Enter the Name of Author\n");
    gets(author);

    printf("Enter the Price of Book\n");
    scanf("%d",&price);

    printf("Enter the Year when Book was published\n");
    scanf("%d",&year);

    printf("Information of Book is:\n");
    printf("Name of Book: %s\n",book);
     printf("Name of Author: %s\n",author);
      printf("Price of Book: %d\n",price);
       printf("Book was published in %d\n",year);

    }