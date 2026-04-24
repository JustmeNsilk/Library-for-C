##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## compile my programs
##

#		-----------|		 COMPILER			|-----------

CC	= clang

#		-----------|		 SOURCES			|-----------

SRC	=	src/temp.c

TEST_SRC	:=	$(SRC)
TEST_SRC	+=	$(shell find ./tests/ -type f -name "*.c")

SRC	+=	src/main.c

OBJ	=	$(SRC:.c=.o)

TEST_OBJ	=	$(TEST_SRC:.c=.o)

#		-----------|		 FLAGS			|-----------

CPPFLAGS	=	-I./include/ -g3

CFLAGS	=	-Wall -Wextra

LDLIB	=	-L./lib/my/
LMLIB	=	-lmy

CRITERION	=	-lcriterion --coverage

#		-----------|		 NAMES			|-----------

NAME 	=	compiler

EPIC_NAME	=	epic_binary

TEST_NAME	=	unit_tests

#		-----------|		 RULES			|-----------

all:$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/ --no-print-directory --no-print-directory
	echo "> root : Compiling files..."
	$(CC) $(LDLIB) -o $(NAME) $(OBJ) $(LMLIB)
	echo "> root : [Done]"

clean:
	make -C ./lib/my/ clean --no-print-directory
	echo "> root : Removing unecessary files..."
	find . -type f -name "*.o" -delete
	find . -type f -name "*.gcda" -delete
	find . -type f -name "*.gcno" -delete
	find . -type f -name "*~" -delete
	find . -type f -name "*#" -delete
	echo "> root : [Done]"

fclean:	clean epiclean
	make -C ./lib/my/ fclean --no-print-directory
	echo "> root : Removing binary executables..."
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	echo "> root : [Done]"

re:	fclean all

#		-----------|		 UNIT_TESTS			|-----------

unit_tests: clean all
	$(CC) -o $(TEST_NAME) $(TEST_SRC) $(CPPFLAGS) $(CRITERION) $(LDLIB) $(LMLIB)

tests_run: unit_tests
	./$(TEST_NAME)

gcovr_run: tests_run
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/ --txt-metric branch

#		-----------|		 EPICLANG			|-----------

epiclean:
	echo "> root : Removing epiclang binary..."
	find . -type f -name "*.pch" -delete
	rm -f $(EPIC_NAME)
	echo "> root : [Done]"


style_check: all
	echo "> [BANANA] : Checking program..."
	epiclang -o $(EPIC_NAME) $(SRC) $(CPPFLAGS) $(LDLIB) $(LMLIB)
	./$(EPIC_NAME)
	echo "> [BANANA] : [Done]"

#		-----------|		 PARAMETERS			|-----------

.SILENT: all clean fclean re unit_tests tests_run gcovr_run style_check epiclean $(OBJ) $(NAME) 
.PHONY:	all clean fclean re unit_tests tests_run gcovr_run
