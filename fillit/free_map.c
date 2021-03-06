/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:48:30 by aybouras          #+#    #+#             */
/*   Updated: 2019/05/30 15:39:19 by aybouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_map(char ***map, int map_max)
{
	int		i;

	i = 0;
	while (i < map_max)
	{
		free((*map)[i]);
		i++;
	}
	free(*map);
}
