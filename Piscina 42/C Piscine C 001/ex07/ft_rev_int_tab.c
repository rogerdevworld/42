/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:30:43 by rmarrero          #+#    #+#             */
/*   Updated: 2024/08/12 17:31:41 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = rev;
		i++;
	}
}
