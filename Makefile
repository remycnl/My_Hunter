##
## EPITECH PROJECT, 2022
## Rémy - Canal
## File description:
## Makefile
##

SRC		=       src/main.c \
				src/window.c \
				src/game.c \
				src/init.c \
				src/init_sprite_01.c \
				src/init_sprite_02.c \
				src/init_sprite_03.c \
				src/if_click.c \
				src/destroy.c \
				src/clocks.c \
				src/draw_sprites.c

CFLAGS	=	    -Wall -Wextra -g3

CSFML   =		-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CC      =       gcc -o my_hunter

OBJ     =   	$(SRC:.c=.o)

NAME    =   	makefile

$(NAME):	$(OBJ)
	$(CC) $(SRC) $(CFLAGS) $(CSFML)

clean:
	rm $(OBJ)

fclean: clean
	rm my_hunter

all:	$(NAME)

re: fclean all
