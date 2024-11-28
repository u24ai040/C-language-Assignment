/*A PROGRAM TO ADD/APPEND INFORMATION TO THE FILE "LNMIITSTUDENT.DAT"*/
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[200];
     fptr = fopen("LNMIITSTUDENT.DAT","W");
    fptr = fopen("LNMIITSTUDENT.DAT","a");
    printf("Enter the string that you want to enter in file");
    gets(str);
    printf("This file is on append Mode");
    fprintf(fptr,"%s",str);
    fclose(fptr);
    return 0;
}