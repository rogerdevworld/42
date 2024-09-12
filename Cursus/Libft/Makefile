#makefile 024

#variables
SRC_DIR = srcs
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRC:.c=.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rsc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY : all clean fclean re
