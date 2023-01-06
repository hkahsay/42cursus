/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:40:20 by hkahsay           #+#    #+#             */
/*   Updated: 2022/12/15 17:06:02 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//upload imgs into data with void pointer by using mlx xpm reader 
//& i init mlx ,mlx window
void	up_load_img(t_data *data)
{
	int	width;
	int	height;

	data->mlx_ptr = mlx_init();
	data->win_mlx = mlx_new_window(data->mlx_ptr, data->col * 64,
			data->row * 64, "2d game so_long");
	data->floor = mlx_xpm_file_to_image(data->mlx_ptr,
			"./img/grass.xpm", &width, &height);
	data->player = mlx_xpm_file_to_image(data->mlx_ptr,
			"./img/piggie.xpm", &width, &height);
	data->door = mlx_xpm_file_to_image(data->mlx_ptr,
			"./img/Exit.xpm", &width, &height);
	data->wall = mlx_xpm_file_to_image(data->mlx_ptr,
			"./img/Wall3.xpm", &width, &height);
	data->coin = mlx_xpm_file_to_image(data->mlx_ptr,
			"./img/coins.xpm", &width, &height);
}

// then i put the image to the window by reading the map characters
void	put_img(t_data *data, char c, int col, int row)
{
	if (c == 'C')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_mlx, data->coin, col * 64, row * 64);
	if (c == 'E')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_mlx, data->door, col * 64, row * 64);
	if (c == 'P')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_mlx, data->player, col * 64, row * 64);
	if (c == '0')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_mlx, data->floor, col * 64, row * 64);
	if (c == '1')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_mlx, data->wall, col * 64, row * 64);
}

//  
void	print_map(t_data *data)
{
	int	row;
	int	col;

	up_load_img(data);
	row = 0;
	while (row < data->row)
	{
		col = 0;
		while (col < data->col)
		{
			mlx_put_image_to_window(data->mlx_ptr, data->win_mlx, data->floor,
				col * 64, row * 64);
			put_img(data, data->map[row][col], col, row);
			col++;
		}
		row++;
	}
}

void	open_read_map(char *map_file, t_data *data)
{
	int		fd;
	char	*all_char;
	char	*map;

	map = NULL;
	fd = open(map_file, O_RDONLY);
	all_char = ft_strdup("");
	while (1)
	{
		map = get_next_line(fd);
		if (map == NULL)
			break;
		all_char = ft_strjoin(all_char, map);
	}
	data->map = ft_split(all_char, '\n');
	close (fd);
}

char	*map_check(t_data *data)
{
	char	**new_map;

	new_map = data->map;
	data->row = 0;
	while (new_map[data->row])
	{
		data->col = 0;
		while (new_map[data->row][data->col])
		{
			data->col++;
		}
		data->row++;
	}
	return (*data->map);
}
