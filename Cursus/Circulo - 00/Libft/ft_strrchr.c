/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:43:29 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/17 15:21:40 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strrchr(const char *str, char c)
{
	const unsigned char	*local_str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	local_str = (const unsigned char *)str;
	while (len > 0)
	{
		len--;
		if (local_str[len] == (unsigned char)c)
			return ((char *)&local_str[len]);
	}
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char *)&local_str[i]);
	return (NULL);
}

int main()
{
    char str[] = "www.holamundo.com";
    char c = '.';

    printf("%s", ft_strrchr(str,c));

    return 0;
}
