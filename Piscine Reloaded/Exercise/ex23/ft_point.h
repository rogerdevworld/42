/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:00:32 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/11 11:00:39 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif
