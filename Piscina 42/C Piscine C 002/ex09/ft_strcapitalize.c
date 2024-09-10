/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:27:48 by rmarrero          #+#    #+#             */
/*   Updated: 2024/08/16 10:33:52 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	ft_strlowercase(str);
	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (space == 1)
			{
				str[i] -= 32;
				space = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		else
			space = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char var[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_capitalize(var));
	return (0);
}
*/
