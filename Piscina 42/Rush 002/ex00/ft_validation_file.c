/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:30:08 by rmarrero          #+#    #+#             */
/*   Updated: 2024/08/24 17:30:19 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	print_hundred(char *buffer);
void	print_d(char *key, char *buffer);
void	print_ten(char *key, char *key2, char *buffer);
void	print_more_thous(char *buffer, int n);
void	print_unit(char *key, char *buffer, int h);

int	ft_validation_file(int fd, char *buffer, ssize_t bytes_read)
{
	if (fd != -1)
	{
		bytes_read = read(fd, &buffer, 1);
		if (bytes_read > 0)
			return (0);
	}
	return (1);
}

void	col3(int rcin[], char **a, char *buffer)
{
	if (rcin[1] == 3)
	{
		if (rcin[1] == 3 && a[rcin[0]][rcin[1] - 1] == '0' && \
			a[rcin[0]][rcin[1] - 2] == '0')
			rcin[3]--;
		else if (rcin[3] != 1)
		{
			write(1, " ", 1);
			print_more_thous(buffer, 3 * (rcin[3] - 1));
			write(1, " ", 1);
			rcin[3]--;
		}
		rcin[1] = 0;
		rcin[0]++;
	}
}

void	process_rcin(int *rcin, char **a, char *buffer)
{
	if (rcin[1] == 0 && a[rcin[0]][rcin[1]] != '0')
		print_unit(&a[rcin[0]][rcin[1]], buffer, 1);
	else if (rcin[1] == 1)
	{
		if (a[rcin[0]][rcin[1]] == '1' && rcin[1] + 1 < 3)
		{
			print_ten(&a[rcin[0]][rcin[1]], &a[rcin[0]][rcin[1] + 1], buffer);
			rcin[1]++;
			rcin[2]++;
			return ;
		}
		if (a[rcin[0]][rcin[1]] != '0')
			print_d(&a[rcin[0]][rcin[1]], buffer);
	}
	else if (rcin[1] == 2 && a[rcin[0]][rcin[1]] != '0' && \
		a[rcin[0]][rcin[1] - 1] != '1')
		print_unit(&a[rcin[0]][rcin[1]], buffer, 0);
	rcin[1]++;
	col3(rcin, a, buffer);
	rcin[2]++;
}

void	number_transform(int n, int s, char **a, char *buffer)
{
	int	rcin[4];

	rcin[0] = 0;
	rcin[1] = 0;
	rcin[2] = 0;
	rcin[3] = n;
	while (rcin[2] < s)
	{
		process_rcin(rcin, a, buffer);
	}
}

int	file_main(char **a, int n, int s, char *filename)
{
	int		fd;
	ssize_t	bytes_read;
	char	*buffer;
	size_t	buffer_size;

	bytes_read = 0;
	buffer_size = 1024;
	buffer = (char *)malloc(buffer_size);
	if (buffer == NULL)
		return (1);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || ft_validation_file(fd, buffer, bytes_read))
	{
		free(buffer);
		close(fd);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	bytes_read = read(fd, buffer, buffer_size - 1);
	buffer[bytes_read] = '\0';
	number_transform(n, s, a, buffer);
	write(1, "\n", 1);
	close(fd);
	free(buffer);
	return (0);
}
