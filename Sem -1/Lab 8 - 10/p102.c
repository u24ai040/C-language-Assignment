/*A PROGRAM TO COUNT NUMBER OF CHARCTERS, WORDS , AND LINES IN A TEXT FILE*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int c=0,w=0,l=0;
    FILE *fptr;
  
  char ch;
    fptr=fopen("stud.txt","r");
    fscanf(fptr,"%c",&ch);
    while(!feof(fptr))
    {
        c++;
        if(ch == ' ')
        {
            w++;
        }
        if(ch == '\n')
        {
            l++;
        }

        fscanf(fptr,"%c",&ch);
    }

        fclose(fptr);

    printf("%d is the character count, %d is the word count and %d is the line count.",c,w,l);
}

