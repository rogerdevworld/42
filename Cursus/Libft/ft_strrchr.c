/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:43:29 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/12 17:55:31 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	size_t	i;

	while (str[i])
	{
		if (str[i] == c)
			return (str);
		i++;
	}
	return (NULL);
}
