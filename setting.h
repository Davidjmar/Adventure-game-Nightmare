#ifndef GAME_H_
#define GAME_H_
#define BASEMENT 0
#define UPSTAIRS 1

typdef struct _game game;

//list api prototypes

game * game_new (void);

void game_free(game * g);

int game_print_welcome_msg(int r);

int game_print_menu(int r);


#endif
