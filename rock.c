#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    char p1,p2;
    int n;
    printf("Enter your choice ");
    printf(" /nenter \nR for rock \nP for paper\nS for scissor");
    fflush(stdin);//to clear the character buffer 
    scanf("%c",&p1);
    srand(time(NULL));
    n=rand()%100;
    if(n>=1&&n<33)
    p2='R';
    else if (n>=33&&n<66)
    p2='P';
    else if (n>=66&&n<=99)
    p2='S';
    if (p1=='R'&&p2=='R')
    printf("The game is a draw");
    else if (p1=='R'&&p2=='P')
    printf("You Lost The Game!!");
    else if (p1=='R'&&p2=='S')
    printf("You Won The Game");
    else if (p1=='P'&&p2=='R')
    printf("You Won The Game");
    else if (p1=='P'&&p2=='P')
    printf("The game is a draw");
    else if (p1=='P'&&p2=='S')
    printf("You Lost The Game!!");
    else if (p1=='S'&&p2=='R')
    printf("you lost the game");
    else if (p1=='S'&&p2=='P')
    printf("you won the game");
    else if (p1=='S'&&p2=='S')
    printf(" the game is draw!!");
    else
    printf("enter a valid choice");
     
    printf("\nThe computer chose %c",p2);
    printf("\nYou chose %c",p1);

}



