/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:20:52 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/11 15:54:46 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

t_data	*init_data(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data) + 1);
	data->img_ptr = NULL;
	data->mlx_ptr = NULL;
	data->win_mlx = NULL;
	data->p = 0;
	data->e = 0;
	data->c = 0;
	data->moves = 0;
	data->coin = NULL;
	data->player = NULL;
	data->wall = NULL;
	data->floor = NULL;
	data->map = NULL;
	data->ptr = NULL;
	return (data);
}

// int	key_signs(int keycode, t_data *data)
// {
// 	get_player(data->map, data, 'P');
// 	if (keycode == KEY_LEFT && data->map[data->row][data->col - 1] == 'E')
// 		check_coin(data);
// 	else if (keycode == KEY_LEFT)
// 		move_left(data);
// 	if (keycode == KEY_RIGHT && data->map[data->row][data->col + 1] == 'E')
// 		check_coin(data);
// 	else if (keycode == KEY_RIGHT)
// 		move_right(data);
// 	if (keycode == KEY_UP && data->map[data->row + 1][data->col] == 'E')
// 		check_coin(data);
// 	else if (keycode == KEY_UP)
// 		move_up(data);
// 	if (keycode == KEY_DOWN && data->map[data->row - 1][data->col] == 'E')
// 		check_coin(data);
// 	else if (keycode == KEY_DOWN)
// 		move_down(data);
// 	return (0);
// }
