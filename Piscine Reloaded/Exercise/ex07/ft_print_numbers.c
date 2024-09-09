/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:03:43 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/09 19:17:34 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (nombers >= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
