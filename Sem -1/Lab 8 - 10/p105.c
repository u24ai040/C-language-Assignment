/*A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS*/


#include<stdio.h>
#include<string.h>
void swap (char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b =c;
}
void permute(char *word,int left,int right)
{
    //base case
    if(left == right)
    {
        printf("%s ",word); // printing the word
    }
    else
    {
     for(int i = left; i <= right; i++)
     {
        swap(word+left,word+i); //swapping letters keeping first letter fix
        permute(word, left+1,right); // recursive call for permutation
        swap(word+i,word+left); //backtracking
     }
    }
}

int main()
{
    char word[]= "ABCD";
    int left =0,n =strlen(word);
    permute(word,0,n-1);

return 0;
}