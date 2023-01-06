/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:18:10 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/30 16:24:29 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

void	check_error(t_data	*data, char c)
{
	if (c != '1' && c != '0' && c != 'P' && c != 'C' && c != 'E')
	{
		ft_printf("Invalid Map\n");
		end_game(data);
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
				data->map[x][0] != '1' || data->map[x][data->col - 1] != '1')
			{
				ft_printf("Your map does not have walls\n");
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
			data->col++;
		}
		data->row++;
	}
	check_must(data);
	check_wall(data);
}

void	check_must(t_data *data)
{
	if (data->c == 0 || data->e == 0 || data->p != 1
		|| data->row == data->col)
	{
		printf("Error\n");
		if (data->c == 0)
			ft_printf("There is no collectibles!\n");
		if (data->e == 0)
			ft_printf("No exit\n");
		if (data->p < 1)
			ft_printf("No player");
		if (data->row == data->col)
			ft_printf("your map should be rectangular");
		end_game(data);
	}
}
