#include "so_long.h"
#include "mlx.h"

int main()
{
//	t_win win;
	void	*mlx;
	void	*win_ptr;
	void 	*img;
	char 	*img_path = "../xpm/asset_boy.xpm";
	int	img_w;
	int	img_h;

	mlx = mlx_init();
	img = mlx_xpm_file_to_image(mlx, img_path, &img_w, &img_h);
	win_ptr = mlx_new_window(mlx, 599, 599, "so_long");
	mlx_put_image_to_window(mlx, win_ptr, img, 100, 100);
	mlx_loop(mlx);
}
