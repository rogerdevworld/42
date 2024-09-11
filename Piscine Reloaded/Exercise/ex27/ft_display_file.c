/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:38:32 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/11 16:17:37 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		read_lines;
	char	buf[BUF_SIZE + 1];

	read_lines = read(fd, buf, BUF_SIZE);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return (1);
		}
		while ((read_lines = read(fd, buf, BUF_SIZE)) > 0)
			write(1, buf, read_lines);
		if (read_lines == -1)
			write(1, "Cannot read file.\n", 18);
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
