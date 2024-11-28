/* A Program to copy a string in reverse order to another string variable using pointers*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of strings");
    scanf("%d",&n);
    char s[n][100];
    char *str[n];
   char temp[100];

    //taking input
    printf("Enter the strings\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        str[i]=s[i];//initilizing every pointer
    }
    //printing strings
     printf("Strings are :");
    for(int i=0;i<n;i++)
    {
       printf("%s\n",s[i]);
    }
   
    int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)//comparing two strings
            {
                 char *temp;
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string in ascending order : \n");
    for(j=0;j<n;j++)
    {
        printf("%s\n",str[j]);
    }
}