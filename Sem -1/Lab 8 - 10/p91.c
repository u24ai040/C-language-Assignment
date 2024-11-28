/* A Program to calculate the square and cube of an entered number using pointers*/

#include<stdio.h>
int main()
{
    int num;
  
    printf("Enter the number\n");
    scanf("%d",&num);
    int square,cube;
      int *ptr;
    ptr=&num;

    square=(*ptr)*(*ptr);
    cube=(*ptr)*(*ptr)*(*ptr);
    printf("Square of %d = %d\n",*ptr,square);
    printf("Cube of %d = %d\n",*ptr,cube);

}
