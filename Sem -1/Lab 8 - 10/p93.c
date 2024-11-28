/* WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; // declaration of string
    //taking input 
    printf("Enter the string: "); 
    gets(str);

    char *ptr = str; //declaration of pointer 
    int wordcount =0; 

    if(strcmp(str,"") != 0) //case for no word
    {

    while(*ptr != '\0')
    {
        if(*ptr == ' ' || *ptr == '\n' || *ptr == '\0')
        {
            wordcount++;
        }
        ptr++;
    }
            wordcount++;
    }
    printf("%d",wordcount);
    return 0;
}