//libft ft_isascii
#include "libft.h"

int	ft_isascii(inr c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
