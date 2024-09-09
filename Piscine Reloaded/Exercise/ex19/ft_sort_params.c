/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:57:40 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/09 19:52:35 by rmarrero         ###   ########.fr       */
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

int	main(itn agrc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{


