/* Program to check whether character is a small case letter or not using conditional operater*/

#include<stdio.h>
int main()

{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);

   (ch>='a' && ch<='z')?printf("ch is a small case letter \n"):printf("%c is not small case letter \n");
   
}