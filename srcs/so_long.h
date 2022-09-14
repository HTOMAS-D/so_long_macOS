#ifndef SO_LONG_H
#define SO_LONG_H
#include "mlx.h"
#include "../libft/ft_printf.h"

typedef struct s_win
{
	void 	*mlx_ptr;
	void 	*win_ptr;
	int	height;
	int 	width;
}	t_win;

typedef struct s_img
{
	t_win	win;
	void	*img_ptr;
	char	*addr;
	int	h;
	int	w;
	int	bpp;
	int	endian;
	int	line_len;
}	t_img;

t_win new_program(int w, int h, char *str);

#endif
