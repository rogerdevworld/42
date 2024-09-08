#makefiles C 009

#objetivo : dependencias
#	instruciones

#variables
OBJS = ft_putchar.c  ft_putstr.c  ft_strcmp.c  ft_strlen.c  ft_swap.c
RM = rm -f 
LIBFT = libft.a

CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
CLIB = ar rsc

program: *.c
	$(CC) $(CFLAGS) -I includes

#eliminar archivos
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIBFT)
