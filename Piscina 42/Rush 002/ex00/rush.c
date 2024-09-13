/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:25:18 by asegura-          #+#    #+#             */
/*   Updated: 2024/08/24 13:25:21 by asegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	error_malloc(char **a, int i);
void	free_malloc(char **a, int i);
int		file_main(char **a, int n, int s, char *filename);

void	put_values(char **a, char *argv, int *size)
{
	int	rcis[4];

	rcis[0] = 0;
	rcis[1] = 0;
	rcis[2] = 0;
	rcis[3] = *size;
	if (*size % 3 == 1)
	{
		a[rcis[0]][rcis[1]] = '0';
		a[rcis[0]][rcis[1]] = '0';
		rcis[1] = 2;
		rcis[3] = *size + 2;
	}
	else if (*size % 3 == 2)
	{
		a[rcis[0]][rcis[1]] = '0';
		rcis[1] = 1;
		rcis[3]++;
	}
	while (rcis[2] < *size)
	{
		a[rcis[0]][rcis[1]] = argv[rcis[2]];
		rcis[1]++;
		if (rcis[1] == 3)
		{
			rcis[0]++;
			rcis[1] = 0;
		}
		rcis[2]++;
	}
	*size = rcis[3];
}

int	get_size(char *argv)
{
	int	index;

	index = 0;
	while (argv[index] != '\0')
	{
		index++;
	}
	return (index);
}

int	rush(int argc, char *argv[])
{
	char	**array;
	char	*filename;
	int		index;
	int		n;
	int		size;

	size = 0;
	if (argc == 2)
	{
		filename = "numbers.dict";
		size = get_size(argv[1]);
	}
	else
	{
		filename = argv[1];
		size = get_size(argv[2]);
	}
	n = size;
	index = 0;
	if (n % 3 == 0)
		n--;
	n = (n / 3) + 1;
	array = (char **) malloc(n * sizeof(char *));
	if (!array)
	{
		write(1, "Error\n", 25);
		return (1);
	}
	while (index < n)
	{
		array[index] = (char *) malloc(3 * sizeof(char));
		if (array[index] == NULL)
		{
			error_malloc(array, index);
			return (1);
		}
		index++;
	}
	if (argc == 2)
		put_values(array, argv[1], &size);
	else
		put_values(array, argv[2], &size);
	if (file_main(array, n, size, filename) != 0)
	{
		free_malloc(array, n);
		write(1, "Error\n", 6);
		return (1);
	}
	free_malloc(array, n);
	return (0);
}
