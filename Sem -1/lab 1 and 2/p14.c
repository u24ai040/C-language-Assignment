/* A Program to check whether a given is small case letter or Capital letter or a symbol or a number.*/

#include<stdio.h>
 int main()
 {
    char ch;
    printf("Enter a charcter");
    scanf("%c",&ch);
    printf("The ASCII value of character is =%d \n",ch);
    if(ch<=90 && ch>=65)//if ASCII value of any character is from 65 to 90 then it is a uppercase letter.
    {
        printf("It is Uppercase letter");
    }
    else if(ch<=122 && ch>=97)//if ASCII value of any character is from 97 to 122 then it is a lowercase letter.
    {
        printf("It is Lowercase letter");
    }
    if(ch<=57 && ch>=48)//if ASCII value of any character is from 48 to 57 then it is a number.
    {
        printf("It is number");
    }
    else  //if ASCII value is  in any other range it is symbol
    {
        printf("It is Symbol");
    }
 }