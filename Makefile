# Variables
#ARRAYDIR needs to be changed unsure what to substitute it with
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic -g
LDLIBS = -lm
PROG = adventureTime
SRC = $(PROG).c #hero.c
HDR = #header name in here hero.h
OBJ = $(SRC:.c=.o)

# Targets
$(PROG): $(OBJ)
$(OBJ): $(HDR)
TAGS: $(SRC) $(HDR)
	etags $^
.PHONY: clean
clean:
	$(RM) $(PROG) $(OBJ)
