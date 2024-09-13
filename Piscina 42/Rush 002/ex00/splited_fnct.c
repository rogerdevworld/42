/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splited_fnct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:53:08 by asegura-          #+#    #+#             */
/*   Updated: 2024/08/25 04:53:29 by asegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	skip_and_print_word(char *buffer, int *i)
{
	while (buffer[*i] == ' ' || buffer[*i] == ':')
		(*i)++;
	while ((buffer[*i] >= 'a' && buffer[*i] <= 'z') || \
		(buffer[*i] >= 'A' && buffer[*i] <= 'Z'))
	{
		write(1, &buffer[*i], 1);
		(*i)++;
	}
}
