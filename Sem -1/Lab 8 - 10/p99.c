#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *fptr;
    char ch;
    int count=0;
    fptr=fopen("st.txt","r");
    printf("Information in file is : \n");
    while(!feof(fptr))
    {
        ch=getc(fptr);
        
        printf("%c",ch);
        switch(toupper(ch))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                    count++;
                    break;
        }
    }
    fclose(fptr);
    printf("\nNumber of Vowel in file is : %d\n",count);

}