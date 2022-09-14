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

t_win new_program(int w, int h, char *str);
char	**check_map(t_win *win, char *av);
char	**ft_read_map(char **str);
static int	check_letters(char *str);
static int 	is_rectangle(char *str, t_map *map);
static int	check_wall(char *str, t_map *map);
#endif
