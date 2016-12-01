#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"


//every good story starts with a setting
//below should set the setting first
typedef struct room {
  int * commands;
  // int * items;
 
  char description[/*put in number of them somewhere here */];
} setting;

//create print usage with command instructions

//void _items();
//void _commands();
//void _rooms();

int main(void) {
  
  // _items();
  // _commands();
  // _room();

  int exit = 0;
  
  int room = BASEMENT;

  char choice [20];
  
  while(!exit) {

    //evolution of the game happens through the while loop

    game_print_welcome_msg(room);

    game_print_menu(room);

    int ret = scanf("%19s", choice);

    if(ret != 1) return -1;// input  a printf here
    
    game_make_choice(choice, &room, &exit);
    //changes current room
  }
  
}
