/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:26:43 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/09 17:27:23 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (nb);
	index = 2;
	while (index * index <= nb)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
//printf("%i", index * index);
