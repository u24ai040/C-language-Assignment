/*A program to find length of string including space and excluding space using pointers */

#include<stdio.h>
#include<string.h>
int main()
{
    int l1=0,l2=0,c1=0,c2=0;
    char s[30],*p;
    printf("Enter the string");
    gets(s);
    p=s;
    printf("String is");
    puts(p);
    while(*p!='\0')
    {
       l1++;
       p++;
    }
    printf("Encluding space length of string is %d\n",l1);//printing length encluding space

//calculating space in string
    for(int i=0;i<l1;i++)
    {
        if(s[i]==' ')
        {
            l2++;
        }
    }
    printf("Excluding space length of string is %d\n",(l1-l2));//printing length excluding space

}