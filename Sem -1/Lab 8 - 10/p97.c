/* A Program to count the number of vowel in a string using pointers*/

#include<stdio.h>
#include<string.h>


int main()
{
    char str[50];
    int count=0;
 
    printf("Enter the string \n");
    gets(str);

    char *s;
    
    puts(s);
    //Converting all character in lower case
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
    }
    s=str;
    while(*s!='\0')
    {
        switch(*s)
        {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
                        count++;
                        break;
        }
        s++;
    }
        printf("Number of Vowel in string = %d",count);
}