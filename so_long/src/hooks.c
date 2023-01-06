/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:42:12 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/29 11:58:18 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

int	exit_game(t_data *data)
{
	free(data->map);
	ft_printf("congratulations");
	exit(0);
	return (1);
}

int	count_coin(t_data *data)
{
	data->coin_count = 0;
	data->row = 0;
	while (data->map[data->row])
	{
		data->col = 0;
		while (data->map[data->row][data->col])
		{
			if (data->map[data->row][data->col] == 'C')
				data->coin_count++;
			data->col++;
		}
		data->row++;
	}
	printf("%d\n", data->coin_count);
	return (data->coin_count);
}

int	check_coin(t_data *data)
{
	if (count_coin(data) == 0)
		exit_game(data);
	else
		ft_printf("eat all coins");
	return (0);
}

char	*get_player(char **map, t_data *data, char p)
{
	int	row;
	int	col;

	row = 0;
	while (map[row])
	{
		col = 0;
		while (map[row][col])
		{
			if (map[row][col] == p)
			{
				data->row = row;
				data->col = col;
				data->map = map;
				return (map[row] + col);
			}
			col++;
		}
		row++;
	}
	return (NULL);
}

int	key_words(int keycode, t_data *data)
{
	get_player(data->map, data, 'P');
	if (keycode == KEY_A && (data->map[data->row][data->col - 1]) == 'E')
		check_coin(data);
	else if (keycode == KEY_A)
		move_left(data);
	if (keycode == KEY_D && data->map[data->row][data->col + 1] == 'E')
		check_coin(data);
	else if (keycode == KEY_D)
		move_right(data);
	if (keycode == KEY_S && data->map[data->row + 1][data->col] == 'E')
		check_coin(data);
	else if (keycode == KEY_S)
		move_down(data);
	if (keycode == KEY_W && data->map[data->row - 1][data->col] == 'E')
		check_coin(data);
	else if (keycode == KEY_W)
		move_up(data);
	if (keycode == KEY_ESC)
		end_game(data);
	return (0);
}
