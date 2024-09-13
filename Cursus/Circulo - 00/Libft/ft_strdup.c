/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:46:22 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/12 17:41:12 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(const char *s, size_t n)
{
	size_t	len;
	char	*duplicado;

	len = ft_strlen(src);
	duplicado = (char *)malloc((len + 1) * sizeof(char));
	if (!duplicado)
		return (NULL);
	ft_strcpy(duplicado, s);
	return (duplicado);
}
