#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "game.h"


int game_print_welcome_msg(int roomNumber){
  if (roomNumber == BASEMENT){
    printf("\nYou're in the basement.I have to admit, the carpet you're standing on has some pretty questionable looking stains. You should probably get out of here.\n");
  }
  else if (roomNumber == OUTSIDE) {
    printf("\n\n");
  }
  else if (roomNumber == LOFT) {
    printf("\nCongrats you're in a loft. Well done.... Not really. No one is impressed\n");
  }
  else if (roomNumber == ARENA){
    printf("\nYou're now in an Arena. Don't ask me how you got here. You're the one that decided to go this way.\n");
  }
  return 0;
}

int game_print_menu(int roomNumber){
  if (roomNumber == BASEMENT){
    printf("\nyou may now go forward or backward\n");
  }
  else {
 printf("\n You may now go forward, backward, left, or right\n");
  }
  //customize menu based on room number
  //compare to if statements in make choice function

  return 0;
}

int game_make_choice(char const * choice, int * roomNumber, int * exit){
  if(* roomNumber == BASEMENT) {
    if (strcmp(choice, "forward") ==0){
      printf("\n Congrats you've gone absolutely nowhere, you are literally just standing in a basement. I'm sure you're making your parents proud\n");
    }
    else if( strcmp(choice, "backward") ==0){
      printf("\nYou went throught the basement backdoor and are now outside. This is actually progress. You've done something right for once you miserable slacker\n");
      * roomNumber = OUTSIDE;
    }
    else {
      printf("\n choice unavailable\n");
    }
  }
  else if(*roomNumber == OUTSIDE){
    if (strcmp(choice, "forward") ==0){
      printf("\nyou are back in the basement\n");
      *roomNumber = BASEMENT;
    }
    else if (strcmp(choice, "backward") ==0){
      printf("you die\n");
      *exit = 1;
    }
  }
  return 0;
}

