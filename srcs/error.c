/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:46:31 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/12 15:18:33 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../mlx/mlx.h"

int	check_letters(char **mapstr, t_map *map)
{
	int	i;
	int	j;

	map->player = 0;
	map->collect = 0;
	map->exit = 0;
	whike
}

static int	is_rectangle(char **str, t_map *map)
{

}

//static int	check_wall(char *str, t_map *map)
//{
//	
//}

int	error_check(char **mapstr, t_map *map)
{
	int i;
	int j;
	
	if(!mapstr)
		return (1);
	i = 0;
	while(mapstr[i])
	{
		j = 0
		while(mapstr[i][j])
		{
			if(mapstr[i][j] != 'P' && mapstr[i][j] != 'C'
				&& mapstr[i][j] != 'E' && mapstr[i][j] != '1'
				&& mapstr[i][j] != '0')
				return (1);
		}
	}
	if(check_letters(mapstr, map) || is_rectangle(mapstr, map)
		|| check_wall(mapstr, map))
		return (1);
}	
