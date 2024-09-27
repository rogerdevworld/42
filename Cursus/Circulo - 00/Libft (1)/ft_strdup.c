/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:46:22 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/13 12:59:38 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*duplicado;

	i = 0;
	duplicado = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!duplicado)
		return (NULL);
	while (s[i])
	{
		duplicado[i] = s[i];
		i++;
	}
	duplicado[i] = '\0';
	return (duplicado);
}
