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

static int	check_letters(char *str)
{
	if(!ft_strchr(str, 'P'))	
	{	
		ft_printf("NO STARTING POSITION\n")
		return (0);
	}
	if(!ft_strchr(str, 'C'))
	{	
		ft_printf("NO COLLECTIBLE\n");
		return (0);
	}
	if(!ft_strchr(str, 'E'))
	{
		ft_printf("NO EXIT\n");
		return (0);
	}
	return (1);
}

static int	is_rectangle(char *str, t_map *map)
{
	int	i;
	int	j;

	while(str[map->w] && str[map->w] != '\0')
		map->w++;
	i = 0;
	j = -1;
	while(str[j++])
	{
		if (str[j] == '\n' && i != map->w)
			break;
		else if(str[j] == '\n' && str[j + 1] && i == map-> w)
		{
			i = 0;
			map->h++;
		}
		if(str[j] != '\n')
			i++;
	}
	return (i == map->w)
}

static int	check_wall(char *str, t_map *map)
{
	
}

int	error_check(char **mapstr, t_map *map)
{
	int i;
	int j;
	
	if(!mapstr)
		return (1)
	if(!check_letters(mapstr) || !is_rectangle(mapstr, map)
		|| !check_wall(mapstr, map))
		return (1);
}	
