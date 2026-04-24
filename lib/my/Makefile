##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## compile my programs
##

#		-----------|		 SOURCES			|-----------

SRC	=	$(shell find -type f -name "*.c")

OBJ	=	$(SRC:.c=.o)

#		-----------|		 NAMES			|-----------

NAME 	=	libmy.a

#		-----------|		 FLAGS			|-----------

CFLAGS = "-Wall" "-Wextra" "-g3" "-Wno-unused-value"

CPPFLAGS = -I../../include/

#		-----------|		 RULES			|-----------

all:	$(NAME)

$(NAME):	$(OBJ)
	echo "> lib/my/ : Compiling lib..."
	ar rc $(NAME) $(OBJ)
	echo "> lib/my/ : [Done]"

clean:
	echo "> lib/my/ : Removing unecessary files..."
	find . -type f -name "*.o" -delete
	find . -type f -name "*~" -delete
	find . -type f -name "*#" -delete
	echo "> lib/my/ : [Done]"

fclean:	clean
	echo "> lib/my/ : Removing binary lib..."
	rm -f $(NAME)
	echo "> lib/my : [Done]"

re:	fclean all

.SILENT: all clean fclean re $(OBJ) $(NAME)
.PHONY: all clean fclean re
