/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:50:13 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/12 11:31:12 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H
#include "../mlx/mlx.h"
#include "../libft/ft_printf.h"
#include <stdlib.h>

typedef struct s_map
{
	int	h;
	int	w;
	int	exit;
	int	collect;
	int	player;
}	t_map;

typedef struct s_game
{
	void 	*mlx_ptr;
	void 	*win_ptr;
	char	**mapstr;	
	t_map	*map;
}	t_win;

//so_long.c
int	check_file(char *file);
void	map_error(t_win *win);

//maps.c
int	check_map(t_win *win);
char	**ft_read_map(char *av);

//error.c
int	error_check(char **mapstr, t_map *map);
int	check_wall(char **mapstr, t_map *map);
int	map_size(char **mapstr, t_map *map);
int	check_letters(char **mapstr, t_map *map);

#endif
