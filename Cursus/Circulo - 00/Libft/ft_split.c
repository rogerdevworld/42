/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:18:29 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/19 16:25:01 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*split;
	char	*temp;

	i = 0;
	split = (char *)malloc(
	while (s[i])
	{
		while (s[i] != c)
		{
			temp[i] = s[i];
			i++;
