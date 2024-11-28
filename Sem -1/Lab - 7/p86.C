#include<stdio.h>
#include<string.h>
int line(char s[]);
int main()
{
    char s[100];
    int length=0;
    printf("Enter the line.\n");
    gets(s);
   
    printf("Entered line is:");
    puts(s);
    line(s);
}

int line(char s[])
{
    
    int length=0;
     while(s[length]!='\0')
    {
        length=length +1;
    }
    printf("Length of the string is %d",length);

}
    
    
    