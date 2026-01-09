/* Dice.c */

#include<stdio.h>
#include<stdlib.h>

int roll_dice(int lim){ //lim = limit
  int x;
  x = rand() % lim + 1;
  return x;
}

int main() {

    int balance = 1000; // $1000
    char want_to_bet ;
    int bet_amount;
    int choice;
    int result;

    
    if(want_to_bet == 'y') {

    while (balance > 0)
    {
         printf("Set An Amount TO BET:- ");
         scanf(" %d",&bet_amount);

         printf("Choose A Number (1 - 6): ");
         scanf(" %d", &choice);

        result = roll_dice(6);
        printf("ANNNNDDDD ROLL SAYS: %d\n", result);

    if (result == choice) {
            printf("You Fukin Won The Bet, Hurrrrayyy!\n ");

    }
    else {
        printf("You Lost The Money, LOSER, Now I Will Spank Your Wife's ASS ! HAHA \n");
        balance = balance - bet_amount;
      }
     printf("Money left: %d\n", balance);
    }
     return 0;
 }
 return 0;
}
