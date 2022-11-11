/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:18:10 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/11 14:47:30 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

void	check_error(t_data	*data, char c)
{
	if (c != '1' && c != '0' && c != 'P' && c != 'C' && c != 'E')
	{
		ft_printf("Invalied Map");
	}
	if (c == 'P')
		data->p++;
	if (c == 'E')
		data->e++;
	if (c == 'C')
		data->c++;
}

void	check_wall(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	while (data->map[x])
	{
		y = 0;
		while (data->map[x][y])
		{
			if (data->map[0][y] != '1' || data->map[data->row - 1][y] != '1' ||
				data->map[x][y] != '1' || data->map[x][data->col - 1] != '1')
			{
				ft_printf("Your map does not have walls");
				end_game(data);
			}
			y++;
		}
		x++;
	}
}

int	end_game(t_data *data)
{
	free (data->map);
	exit (0);
	return (1);
}

void	checks(t_data *data)
{
	data->row = 0;
	while (data->map[data->row])
	{
		data->col = 0;
		while (data->map[data->row][data->col])
		{
			check_error(data, data->map[data->row][data->col]);
			printf("%d %d\n", data->row, data->col);
			data->col++;
		}
		data->row++;
	}
}
