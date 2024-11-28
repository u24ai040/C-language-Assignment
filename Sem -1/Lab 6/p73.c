#include<stdio.h>
int main()
{
    int votes[5]={0};
    int spoil=0,N,i,b=1;//N = number of total ballots, b=value of ballot,
    
    printf("Enter the Total number of Baloots\n");
    scanf("%d",&N);
  printf("Enter the value of Ballot\n");
    for(i=0;i<N;i++)
    {
      
        scanf("%d",&b);
    

    if(b>=1 && b<6)
    {
      votes[b-1]=votes[b-1]+1;
    }
    else
    {
        spoil=spoil+1;
    }
}

printf("\nCounting of vote for each candidate\n");
for(i=0;i<5;i++)
{
    printf("Votes of Candidate %d : %d\n",i+1,votes[i]);
    
}
    printf("Number of Spoil votes : %d\n",spoil);
    }
