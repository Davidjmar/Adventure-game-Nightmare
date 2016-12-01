#ifndef GAME_H_
#define GAME_H_
#define BASEMENT 0
#define OUTSIDE 1
#define LOFT 2
#define ARENA 3

typedef struct _game game;

game * game_new (void);

//int game_exit(int r);
//this is what the while loop that 
void game_free(game * g);
//not quite sure what to write with this

int game_print_welcome_msg(int roomNumber);
//this will be what decide what message tells th user what room they're in

int game_print_menu(int roomNumber);
//this is what will print the menu of options for the game or of a given room
int game_make_choice(char const * choice, int * roomNumber, int * exit);

#endif
