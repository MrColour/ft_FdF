/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 22:56:25 by kmira             #+#    #+#             */
/*   Updated: 2019/06/07 23:14:42 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_points(int max_x, t_point **points)
{
	int i;
	int j;

	i = 0;
	while (points[i] != NULL)
	{
		j = 0;
		printf("New line of points\n");
		while (j < max_x)
		{
			printf("Point %3d,     (%-3d, %-3d, %-3d) color: %s\n",
			j, points[i][j].x, points[i][j].y, points[i][j].z, points[i][j].color);
			j++;
		}
		i++;
	}
}