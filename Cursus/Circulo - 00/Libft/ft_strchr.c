/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:26:16 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/13 09:36:15 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	const unsigned char *local_s;
	size_t	i;

	i = 0;
	local_s = (const unsigned char *)s;
	while (local_s[i])
	{
		if (local_s[i] == (unsigned char)c)
			return (s);
		i++;
	}
	return (NULL);
}
