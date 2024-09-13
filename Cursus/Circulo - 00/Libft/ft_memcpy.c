/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 06:14:58 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/13 07:22:54 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char		*local_src;
	size_t		i;
	unsigned char	*local_dest;

	i = 0;
	local_dest = (unsigned	char *)dest;
	local_src = (const unsigned	char *)src;
	while (i < n)
	{
		local_dest[i] = local_src[i];
		i++;
	}
	return (dest);
}
