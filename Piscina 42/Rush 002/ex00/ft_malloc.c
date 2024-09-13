/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:13:55 by asegura-          #+#    #+#             */
/*   Updated: 2024/08/24 13:13:56 by asegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	error_malloc(char **a, int i)
{
	int	b;

	b = 0;
	while (i > b)
	{
		free(a[i]);
		i--;
	}
	free(a);
}

void	free_malloc(char **a, int i)
{
	int	b;

	b = 0;
	while (b < i)
	{
		free(a[b]);
		b++;
	}
	free(a);
}
