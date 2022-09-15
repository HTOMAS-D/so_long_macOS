#include "so_long.h"
#include "../mlx/mlx.h"

void	put_img(t_win *win, void *img, int x, int y)
{
	mlx_put_image_to_window(win->mlx_ptr, win->win_ptr, img, x * 64, y * 64);
}

void	get_img(t_win *win)
{
	win->img->wall = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/wall.xpm", &win->map->w, &win->map->h);
	win->img->exit_o = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/safe_o.xpm", &win->map->w, &win->map->h);
	win->img->exit_c = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/safe_c.xpm", &win->map->w, &win->map->h);
	win->img->player = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/pato_s.xpm", &win->map->w, &win->map->h);
	win->img->collect = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/coin1.xpm", &win->map->w, &win->map->h);
	win->img->mid = mlx_xpm_file_to_image
		(win->mlx_ptr, "xpm/mid.xpm", &win->map->w, &win->map->h);
}

void	game_win(t_win *win)
{
	win->mlx_ptr = mlx_init();
	win->win_ptr = mlx_new_window
		(win->mlx_ptr, win->map->w * 64, win->map->h * 64, "so_long");
//	win->img = malloc(sizeof(t_img));
	win->moves = 0;
	win->over = 0;
	get_img(win);
	draw_img(win);
	printf("cheguei aqui");
}
