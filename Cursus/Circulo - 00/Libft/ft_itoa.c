/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:59:05 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/26 13:14:22 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	int_len(long nbr);

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = len - 1;
	if (nbr == 0)
		result[0] = '0';
	else
	{
		if (nbr < 0)
			nbr = -nbr;
		while (nbr != 0)
		{
			result[i] = ((nbr % 10) + '0');
			nbr = nbr / 10;
			i--;
		}
		if (n < 0)
			result[0] = '-';
	}
	result[len] = '\0';
	return (result);
}

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
/*
int main(void)
{
    int i = 0;
    int numbers[] = {123, -456, 0, 2147483647, -2147483648};
    char *str;
    
    while (i < 5)
    {
        str = ft_itoa(numbers[i]);
        if (str)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], str);
            free(str);
        }
        else
        {
            printf("Error al convertir el número %d\n", numbers[i]);
        }
        i++;
    }
    return 0;
}
*/
