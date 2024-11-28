/*Given a word , rearrange the letters of to construct another word in such a way that, is lexicographically greater than
.*/

#include<stdio.h>
#include<string.h>

int main()

{
    int t;
    printf("Enter the  Number of total words\n");
    scanf("%d",&t);
    if(t>0 && t<10000)
    {  

    char text[t][100];
     printf("Enter the words\n");
//taking input
    for(int i=0;i<t;i++)
    {
        scanf("%s",text[i]);
    }
    int flag[t];
    

    for(int i=0;i<t;i++)//this loop is for word 
    {
        flag[i]=0;
        int l=strlen(text[i]);
        for(int j=l;j>0;j--)//this loop is for letters in the words
        {
            if(text[i][j]>text[i][j-1])
            {
            char temp;
            temp=text[i][j];
            text[i][j]=text[i][j-1];
            text[i][j-1]=temp;
            flag[i]=1;
            break;
            }
        }
    }
printf("\n");
for(int i=0;i<t;i++)
{
    if(flag[i]==0)
    {
        printf("No change in word\n");

    }
    if(flag[i]==1)
    {
        puts(text[i]);
    }
}
    }
    else
    {
        printf("Invalid Input");
    }
return 0;
}
