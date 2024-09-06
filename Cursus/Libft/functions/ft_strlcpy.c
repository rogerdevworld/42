//libft ft_strlcpy
#include "libft.h"

int	ft_strlen(char *str)
{
	int length;
	
	while (str[length])
		length++;
	return (length);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigne int size)
{
	unsigned int i;
	unsigned int length_src;

	i = 0;
	length_src = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length_src);
}
