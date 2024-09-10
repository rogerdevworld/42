/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:57:40 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/10 10:19:05 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char temp;

	tem = *a;
	*a = *b;
	*b = tem;
}


void	ft_print_args()
{
	while ()
	{
		ft_putchar()
	}
}
int	main(itn agrc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{

	}
