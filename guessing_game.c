/*Programmer: Mahalah Joy Ismael
  Date: December 12, 2022
  Description: A number guessing game using strings of arrays, the computer will select random number from 1-100. 2 players will keep guessing number until someone finds the computer number. The computer will tell if the guess was too high or too low.
  */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main() {

 int playerNum = 0;
 int number = 0;
 int playerInput = 0;
 int guess = 0;
 char input;
 char str[6] = {0};
 int player_1 = 1;
 int player_2 = 2;
 int pass1 = 3;
 int pass2 = 3;
 int i = 1;
 int playerTurn = 0;
 int turn = 0;

 srand(time(NULL));
 number = 0 + rand() % 100; //random number is generated

 printf("WELCOME TO THE NUMBER GUESSING GAME!\n");
 while (number != guess) {
    printf("\n Player %d's turn\n", playerNum);
    printf("Player number?");
    scanf("%d", &playerInput);
    }
 if (playerNum != playerInput) {
    printf("\nWait for your turn.");
    printf("\n Player number?");
 }
 if (player_1 != playerNum)
    player_2 = playerNum;

 if (i%2 == 1) {playerNum = player_1;
 }
 else {
    playerNum = player_2;
 } i = i+1;
    printf("Enter your Guess, 1-100 or Pass: ");
    scanf("%s", str);

 if (strcmp(str, "pass")==0) {
    if (playerNum == player_1) {

    pass2 = pass2 - 1;
    printf("Player 2 has %d more 'Pass' left\n", pass2);
 }
 else {
    pass1 = pass1 -1;
    printf("Player 1 has %d more 'Pass' left\n", pass1);
}
    else {
        guess = atoi(str);
        if(guess<number) /*If the guess is lower, print "Your guess is too low"*/
        printf("\n Your Guess is too low");
    else if(guess>number) /*if the guess is Higher, print "Your guess is too high*/
        printf("\n Your Guess is too high");
    else /*if the Guess is equal to the random number: Congrats!*/
        printf("\n Congratulations! You got it!");
    }


 return 0;
 }
}
