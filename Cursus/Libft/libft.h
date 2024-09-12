//libft.h
#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
//all functions defined for use!!!!!!!!!
//void functions
void    *ft_memset(void *ptr, int value, size_t num);

//int functions
int     ft_atoi(const char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

//char functions
char    ft_strrchr(char *str, char c);

#endif
