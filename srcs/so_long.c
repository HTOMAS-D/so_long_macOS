/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:35:26 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/12 11:14:31 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../mlx/mlx.h"

int	init_shit(t_win *win, char *av)
{
	win->map = malloc(sizeof(t_win));
	if(!win->map)
		return (0);
	win->map->h = 0;
	win->map->w = 0;
	check_map(&win, av[1]);

}

int main(int ac, char **av)
{
	t_win win;

	if(argc != 2)
	{
		ft_printf("WRONG NUMBER OF ARGUMENTS\n");
		return (1);
	}
	if(!init_all(&win ,av[1]))
	{
		printf("INVALID MAP\n");
		return(1);
	}
	fd = open("../maps/map.ber", O_RDONLY);
 	mlx = mlx_init();
	win_ptr = mlx_new_window(mlx, 599, 599, "so_long");
	mlx_loop(mlx);
}
