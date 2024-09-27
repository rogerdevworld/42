/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:32:01 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/26 17:21:37 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main(void)
{
	char	*str1 = "";
	char	str2[] = "abca";
	printf("%i\n", strncmp(str1, str2, 4));
	printf("%i\n", ft_strncmp(str1, str2, 4));
	return 0;
}*/
