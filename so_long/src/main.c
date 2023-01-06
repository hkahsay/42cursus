/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:13:19 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/30 15:51:38 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

void	arg_check(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
	{
		printf("%s\n", "You dont have enough arguments");
		exit(1);
	}
	if (!strchr(argv[1], '.'))
	{
		ft_printf("%s\n", "Invalid file!");
		exit(1);
	}
	if (ft_strncmp((ft_strrchr(argv[1], '.')), ".ber", 5))
	{
		ft_printf("%s\n", "Invalid extension!");
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_data	*data;
	char	*map;

	arg_check(argc, argv);
	data = init_data();
	map = NULL;
	open_read_map(argv[1], data);
	map_check(data);
	checks(data);
	print_map(data);
	mlx_key_hook(data->win_mlx, key_words, data);
	mlx_hook(data->win_mlx, 17, 0, end_game, data);
	mlx_string_put(data->mlx_ptr, data->win_mlx, 64, 16,
		0x00000000, "Steps");
	mlx_loop(data->mlx_ptr);
	free(data->map);
	return (0);
}
