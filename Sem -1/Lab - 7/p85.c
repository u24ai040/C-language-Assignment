/* Progarm to read character and check whether it is vowel or not*/
#include<stdio.h>
#include<string.h>
 void vowel(char ch);//Function Prototype
 int main()
 {
    char ch;
    printf("Enter the chracter");
    scanf("%c",&ch);//Calling Function
    vowel(ch);
 }
  void vowel(char ch)//Function Defination
 {
    
  if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')  
  {
    printf("Character is Vowel");
  }
  else{
    printf("Character is not Vowel");
 }
 }
