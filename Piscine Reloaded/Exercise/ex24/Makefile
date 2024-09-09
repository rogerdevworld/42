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
	
#Resumen de las Variables Automáticas
#$@: Nombre del archivo objetivo.
#$<: Primer archivo de las dependencias.
#$^: Todos los archivos de las dependencias.
#$?: Dependencias más recientes que el archivo objetivo.
#Estas variables y convenciones permiten que los Makefiles sean más flexibles y menos redundantes, facilitando la automatización del proceso de construcción y gestión de proyectos.	
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
#Este es un objetivo (target) que hemos añadido para simplificar el proceso de reconstrucción completa del proyecto.

#re: Es un objetivo que significa "reconstruir" o "rebuild".
#fclean: Este objetivo limpia todos los archivos generados, tanto los archivos objeto como la biblioteca estática.
#all: Después de limpiar, reconstruye todo el proyecto, creando nuevamente los archivos objeto y la biblioteca estática.
#Cuando ejecutas make re, primero se ejecuta el objetivo fclean, que elimina los archivos generados, y luego ejecuta el objetivo all, que recompila todo desde cero.

re: fclean all

#La declaración .PHONY asegura que estos objetivos siempre se ejecutan, independientemente de si hay archivos con esos nombres en el directorio. Esto evita que Make intente verificar si esos archivos están actualizados o no, y asegura que las acciones correspondientes siempre se lleven a cabo cuando se invocan esos objetivos.
.PHONY : all clean fclean re
