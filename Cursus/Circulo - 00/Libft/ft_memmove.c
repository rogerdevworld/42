/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 06:48:32 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/13 12:27:27 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*local_dest;
	const unsigned char	*local_src;

	local_dest = (unsigned char *)dest;
	local_src = (const unsigned char *)src;
	if (local_dest == local_src)
		return (dest);
	if (local_dest < local_src)
	{
		i = 0;
		while (i++ < n)
			local_dest[i] = local_src[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			local_dest[i - 1] = local_src[i - 1];
			i--;
		}
	}
	return (dest);
}
