/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:19:35 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/11 15:55:04 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "ft_print/include/ft_printf.h"
# include "libft/libft.h"
# include "./mlx/mlx.h"

# define BUFFER_SIZE 42

# define KEY_ESC 53
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_W	13
# define KEY_S 1
# define KEY_D 2
# define KEY_A 0

typedef struct s_data
{
	void	*img_ptr;
	void	*win_mlx;
	void	*mlx_ptr;
	void	*coin;
	void	*wall;
	void	*door;
	void	*player;
	void	*floor;
	void	*ptr;
	char	**map;
	int		p;
	int		e;
	int		c;
	int		row;
	int		col;
	int		moves;
	int		coin_count;
	int		width;
	int		length;
}				t_data;
//get_next_line_functions
char	*get_next_line(int fd);
char	*ft_join_free(char *buffer, char *buf);
char	*ft_line(char *buffer);
char	*ft_next_line(char *buffer);
char	*ft_read_file(int fd, char *result);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
/// so_long
void	up_load_img(t_data	*data);
void	put_img(t_data *data, char c, int x, int y);
void	print_map(t_data *data);
void	open_read_map(char *map_file, t_data *data);
t_data	*init_data(void);
char	**ft_split(const char *s, char c);
char	*map_check(t_data *data);
char	*ft_strdup(const char *s1);
void	check_error(t_data	*data, char c);
void	check_wall(t_data *data);
int		end_game(t_data *data);
void	checks(t_data *data);
void	arg_check(int argc, char **argv);

int		exit_game(t_data *data);
int		count_coin(t_data *data);
int		check_coin(t_data *data);
char	*get_player(char **map, t_data *data, char p);
int		key_words(int keycode, t_data *data);
//int		key_signs(int keycode, t_data *data);
void	count_steps(t_data *data);
void	move_left(t_data *data);
void	move_right(t_data *data);
void	move_up(t_data *data);
void	move_down(t_data *data);
#endif