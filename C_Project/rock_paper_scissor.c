/*
draw outcomes: r-r, p-p or s-s.
win outcomes: r-s, s-p, p-r |first is user and 2nd is computer|
lose outcomes: s-r, p-s, r-p |first is user and 2nd is computer|
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char user_input;

void userInput(){
printf("Enter your choice:\n");
 printf("r for rock, p for paper and s for scissor: ");
 scanf(" %c",&user_input);
}

int main()
{
 userInput();
 printf("you entered %c\n",user_input);

 srand(time(NULL));
 int prob = rand() %100;
 char computer;
 if(prob <= 33)
 computer = 's';
 else if(prob > 33 && prob <= 66)
 computer ='p';
 else
 computer = 'r';

//  user win scenarios
if(user_input=='r' && computer=='s' || user_input=='p' && computer=='r' || user_input=='s' && computer=='p')
{
    printf("You wins !\n");
    printf("Because computer chose %c",computer);
}

else if(computer=='r' && user_input=='s' || computer=='p' && user_input=='r' || computer=='s' && user_input=='p')
{
    printf("Computer wins !\n");
    printf("Because computer chose %c",computer);
}

else 
printf("It's a draw.\n");
}