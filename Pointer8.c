//YC-freeCodeCamp.org
//Memory leak
//Simple betting game
//Jack Queen King-Computer shuffles these cards.Player has to guess the position of 
//queen.If he wins,he gets 3*bet.If he looses,he looses the bet amount.Player has 
// $100 cash initially.

/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{
    char C[3]={'J','Q','K'};
    printf("Shuffling........\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;++i)
    {
        int x=rand()%3;
        int y=rand()%3;
        int temp=C[x];
        C[x]=C[y];
        C[y]=temp;//swaps characters at position x and y
    }
    int playerGuess;
    printf("What's the position of queen ? 1,2 or 3 ?");
    scanf("%d",&playerGuess);
    if(C[playerGuess-1]=='Q')
    {
        cash=cash+(3*bet);
        printf("You Win ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
    else
    {
        cash=cash-bet;
        printf("You Loose ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
}
int main()
{
    int bet;
    printf("**Welcome to the Virtual Casino**\n\n");
    printf("Total cash=$%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet ? $");
        scanf("%d",&bet);
        if(bet==0 || bet>cash)
            break;
        Play(bet);
        printf("\n****************************\n");
    }
}*/

// Output:
// **Welcome to the Virtual Casino**

// Total cash=$100    
// What's your bet ? $34
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?1
// You Win ! Result="Q J K" Total cash=$202

// ****************************
// What's your bet ? $6
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?3
// You Loose ! Result="J Q K" Total cash=$196

// ****************************
// What's your bet ? $



//This code will cause memory leak.
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{
    char *C=(char*)malloc(3*sizeof(char));
    C[0]='J';
    C[1]='Q';
    C[2]='K';
    printf("Shuffling........\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;++i)
    {
        int x=rand()%3;
        int y=rand()%3;
        int temp=C[x];
        C[x]=C[y];
        C[y]=temp;//swaps characters at position x and y
    }
    int playerGuess;
    printf("What's the position of queen ? 1,2 or 3 ?");
    scanf("%d",&playerGuess);
    if(C[playerGuess-1]=='Q')
    {
        cash=cash+(3*bet);
        printf("You Win ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
    else
    {
        cash=cash-bet;
        printf("You Loose ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
}
int main()
{
    int bet;
    printf("**Welcome to the Virtual Casino**\n\n");
    printf("Total cash=$%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet ? $");
        scanf("%d",&bet);
        if(bet==0 || bet>cash)
            break;
        Play(bet);
        printf("\n****************************\n");
    }
}*/

// Output:
// **Welcome to the Virtual Casino**

// Total cash=$100    
// What's your bet ? $34
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?1
// You Win ! Result="Q J K" Total cash=$202

// ****************************
// What's your bet ? $6
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?3
// You Loose ! Result="J Q K" Total cash=$196

// ****************************
// What's your bet ? $



//This code will not cause memory leak.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{
    char *C=(char*)malloc(3*sizeof(char));
    C[0]='J';
    C[1]='Q';
    C[2]='K';
    printf("Shuffling........\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;++i)
    {
        int x=rand()%3;
        int y=rand()%3;
        int temp=C[x];
        C[x]=C[y];
        C[y]=temp;//swaps characters at position x and y
    }
    int playerGuess;
    printf("What's the position of queen ? 1,2 or 3 ?");
    scanf("%d",&playerGuess);
    if(C[playerGuess-1]=='Q')
    {
        cash=cash+(3*bet);
        printf("You Win ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
    else
    {
        cash=cash-bet;
        printf("You Loose ! Result=\"%c %c %c\" Total cash=$%d\n",C[0],C[1],C[2],cash);
    }
    free(C);
}
int main()
{
    int bet;
    printf("**Welcome to the Virtual Casino**\n\n");
    printf("Total cash=$%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet ? $");
        scanf("%d",&bet);
        if(bet==0 || bet>cash)
            break;
        Play(bet);
        printf("\n****************************\n");
    }
}

// Output:
// **Welcome to the Virtual Casino**

// Total cash=$100    
// What's your bet ? $34
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?1
// You Win ! Result="Q J K" Total cash=$202

// ****************************
// What's your bet ? $6
// Shuffling........
// What's the position of queen ? 1,2 or 3 ?3
// You Loose ! Result="J Q K" Total cash=$196

// ****************************
// What's your bet ? $


//Memory leak occurs for unused and unreferenced memory block in heap.

//Also read this link to know more about memory leak:
//https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/