#include "so_long.h"
#include "../mlx/mlx.h"

void	free_map(char **mapstr)
{
	int	i;

	i = 0;
	while (mapstr[i])
	{
		free(mapstr[i]);
		i++;
	}
	free(mapstr);
}

int	exit_game(t_win *win)
{
	free_map(win->mapstr);
	mlx_destroy_image(win->mlx_ptr, win->img->wall);
	mlx_destroy_image(win->mlx_ptr, win->img->exit_o);
	mlx_destroy_image(win->mlx_ptr, win->img->exit_c);
	mlx_destroy_image(win->mlx_ptr, win->img->player);
	mlx_destroy_image(win->mlx_ptr, win->img->collect);
	mlx_destroy_image(win->mlx_ptr, win->img->mid);
	free(win->mlx_ptr);
	exit(0);
}
