##
## Makefile for Makefile in /home/jeremy.elkaim/PSU_2016_minishell1
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Jan  9 08:30:22 2017 jeremy elkaim
## Last update Fri Jan 20 07:36:06 2017 jeremy elkaim
##

NAME    = mysh

SRC    = src/write.c		\
	 src/mysh.c		\
	 src/function.c	\

OBJ    = $(SRC:.c=.o)

LIB	= -L. -lgnl

all:	$(NAME)

$(NAME):$(OBJ)
	gcc $(OBJ) $(LIB) -o $(NAME) -Iinclude

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
