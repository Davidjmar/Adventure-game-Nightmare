#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"


//every good story starts with a setting
//below should set the setting first
typedef struct setting {

  char place [];
  char place description[];
} setting;


int main(void) {

  //write exit
 int exit = 0;
  
 int room = BASEMENT;
 //basement is on ly the starting place
  
  while(!exit) {

    //evolution of the game happens through the while loop

    game_print_welcome_msg(room);

    game_print_menu(room);

    int ret = scanf("%d", &choice);
    
    game_make_choice(choice, &room, &exit);
    //changes current room
  }
  
}
