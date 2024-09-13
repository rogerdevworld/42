/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 06:27:16 by asegura-          #+#    #+#             */
/*   Updated: 2024/08/25 06:27:18 by asegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rush(int argc, char *argv[]);

int	ft_str_is_numeric(char *str)
{
	int	alpha;
	int	index;

	index = 0;
	alpha = 1;
	while (str[index] != '\0')
	{
		if (!((str[index] >= '0' && str[index] <= '9')))
		{
			alpha = 0;
		}
		index++;
	}
	return (alpha);
}

int	main(int argc, char *argv[])
{
	if (argc >= 2 && argc <= 3)
	{
		if (argc == 2 && ft_str_is_numeric(argv[1]))
		{
			rush(argc, argv);
			return (0);
		}
		else if (argc == 3 && ft_str_is_numeric(argv[2]))
		{
			rush(argc, argv);
			return (0);
		}
		write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (1);
}
