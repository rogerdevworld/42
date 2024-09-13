/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:41:55 by asegura-          #+#    #+#             */
/*   Updated: 2024/08/25 04:41:57 by asegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	skip_and_print_word(char *buffer, int *i);

void	print_hundred(char *buffer)
{
	int	i;

	i = 0;
	write(1, " ", 1);
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '1' && buffer[i + 1] == '0')
		{
			if (buffer[i + 2] == '0' && \
			buffer[i + 3] != '0' && buffer[i + 3] != '\0')
			{
				i += 4;
				while (buffer[i] == ' ' || buffer[i] == ':')
					i++;
				while ((buffer[i] >= 'a' && buffer[i] <= 'z') || \
					(buffer[i] >= 'A' && buffer[i] <= 'Z'))
				{
					write(1, &buffer[i], 1);
					i++;
				}
				break ;
			}
		}
		i++;
	}
}

void	print_d(char *key, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == *key && buffer[i + 1] == '0')
		{
			i += 2;
			while (buffer[i] == ' ' || buffer[i] == ':')
				i++;
			while ((buffer[i] >= 'a' && buffer[i] <= 'z') || \
					(buffer[i] >= 'A' && buffer[i] <= 'Z'))
			{
				write(1, &buffer[i], 1);
				i++;
			}
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}

void	print_ten(char *key, char *key2, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == *key && buffer[i + 1] == *key2)
		{
			i += 2;
			while (buffer[i] == ' ' || buffer[i] == ':')
				i++;
			while ((buffer[i] >= 'a' && buffer[i] <= 'z') || \
					(buffer[i] >= 'A' && buffer[i] <= 'Z'))
			{
				write(1, &buffer[i], 1);
				i++;
			}
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}

void	print_more_thous(char *buffer, int n)
{
	int	i;
	int	count;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '1')
		{
			count = 0;
			while (count < n && buffer[i + 1] != '\0' && buffer[i + 1] != \
				' ' && buffer[i + 1] != ':')
			{
				i++;
				count++;
			}
			if (count == n)
			{
				i++;
				skip_and_print_word(buffer, &i);
				break ;
			}
		}
		i++;
	}
}

void	print_unit(char *key, char *buffer, int h)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == *key)
		{
			i++;
			while (buffer[i] == ' ' || buffer[i] == ':')
				i++;
			while ((buffer[i] >= 'a' && buffer[i] <= 'z') || \
					(buffer[i] >= 'A' && buffer[i] <= 'Z'))
			{
				write(1, &buffer[i], 1);
				i++;
			}
			break ;
		}
		i++;
	}
	if (h == 1)
	{
		print_hundred(buffer);
		write(1, " ", 1);
	}
}
