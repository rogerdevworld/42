/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorivas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:17:12 by jorivas-          #+#    #+#             */
/*   Updated: 2024/08/10 15:46:08 by jorivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_x(int x, char corner_left, char middle, char corner_right)
{
	if (x-- >= 1)
	{
		ft_putchar(corner_left);
	}
	while (x-- >= 2)
	{
		ft_putchar(middle);
	}
	if (x == 0)
	{
		ft_putchar(corner_right);
	}
	ft_putchar('\n');
}

void	print_y(int x, int y, char limit)
{
	int	space_inside;

	while (y-- > 2)
	{
		ft_putchar(limit);
		space_inside = 2;
		while (x > space_inside++)
		{
			ft_putchar(' ');
		}
		ft_putchar(limit);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		print_x(x, 'A', 'B', 'C');
	}
	print_y(x, y, 'B');
	if (y >= 2)
	{
		print_x(x, 'A', 'B', 'C');
	}
}
