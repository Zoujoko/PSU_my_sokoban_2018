##
## EPITECH PROJECT, 2018
## makefile sokoban
## File description:
## yes
##
SRC	=	./src/*.c

LIB	=	./lib/my/*.o

SRCLIB	=	./lib/my/*.c

NAME	=	libmy.a

BINAME	=	my_sokoban

INC	=	-I ./include

LIBMY	=	-L ./lib/my $(INC) -lmy

$(NAME) : 	$(SRCLIB) $(LIB)
		make -C ./lib/my
		gcc $(SRC) -o $(BINAME) $(LIBMY) -lncurses -g3

clean	:
		$(RM) $(LIB)
		$(RM) $(OBJ)
		$(RM) $(BINAME)

fclean	:	clean
		rm -f ./lib/my/*.a
		rm -f $(BINAME)
		rm -f $(NAME)

re 	:	clean all

all	:	$(NAME)

.PHONY	:	all clean fclean re


